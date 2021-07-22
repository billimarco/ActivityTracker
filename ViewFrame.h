//
// Created by maruko on 14/07/21.
//

#ifndef ACTIVITYTRACKER_VIEWFRAME_H
#define ACTIVITYTRACKER_VIEWFRAME_H

///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/stattext.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/textctrl.h>
#include <wx/sizer.h>
#include <wx/spinctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/msgdlg.h>
#include "RegisterCollection.h"

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class ViewFrame
///////////////////////////////////////////////////////////////////////////////
class ViewFrame : public wxFrame {
private:

protected:
    wxStaticText *activityManagerLabel;
    wxStaticText *descriptionLabel;
    wxTextCtrl *descriptionText;
    wxStaticText *dateLabel;
    wxStaticText *dayLabel;
    wxSpinCtrl *dayValue;
    wxStaticText *monthLabel;
    wxSpinCtrl *monthValue;
    wxStaticText *yearLabel;
    wxSpinCtrl *yearValue;
    wxStaticText *activityIDLabel;
    wxSpinCtrl *activityIDValue;
    wxStaticText *startTimeActivityLabel;
    wxStaticText *hourStartLabel;
    wxSpinCtrl *hourStartValue;
    wxStaticText *minutesStartLabel;
    wxSpinCtrl *minutesStartValue;
    wxStaticText *endTimeActivityLabel;
    wxStaticText *hourEndLabel;
    wxSpinCtrl *hourEndValue;
    wxStaticText *minutesEndLabel;
    wxSpinCtrl *minutesEndValue;
    wxButton *addActivityButton;
    wxButton *modifyActivityDescriptionButton;
    wxButton *removeActivityButton;
    wxButton *modifyTimeActivityButton;
    wxButton *viewRegisterButton;
    wxButton *modifyActivityButton;
    wxTextCtrl *listRegisterActivity;
    RegisterCollection collection;

    // Virtual event handlers, overide them in your derived class
    virtual void dateChangedOnSpinUpdate(wxCommandEvent &event) {
        update();
    }

    virtual void addActivityButtonOnButtonClick(wxCommandEvent &event) {
        Time startTime(hourStartValue->GetValue(), minutesStartValue->GetValue());
        Time endTime(hourEndValue->GetValue(), minutesEndValue->GetValue());
        Date newDate(dayValue->GetValue(), monthValue->GetValue(), yearValue->GetValue());
        if (newDate.verifyDate(dayValue->GetValue(), monthValue->GetValue(), yearValue->GetValue())) {
            if (collection.getCollection().find(newDate.toString()) == collection.getCollection().end()) {
                std::shared_ptr<Register> regPointer(new Register(newDate));
                collection.attachRegister(regPointer);
            }
            bool checkTime = collection.getCollection().at(newDate.toString())->addActivity(
                    descriptionText->GetValue().ToStdString(), startTime, endTime);
            if (!checkTime) {
                wxMessageDialog *alert = new wxMessageDialog(NULL,
                                                             wxT("Controllare che i tempi delle attività non siano intersecati tra di loro e che il tempo iniziale sia minore di quello finale"),
                                                             wxT("Attivita' non aggiunta"), wxOK);
                alert->ShowModal();
            } else {
                update();
            }
        } else {
            wxMessageDialog *alert = new wxMessageDialog(NULL, wxT("Controllare che la data sia valida"),
                                                         wxT("Attivita' non aggiunta"), wxOK);
            alert->ShowModal();
        }
    }

    virtual void modifyActivityDescriptionButtonOnButtonClick(wxCommandEvent &event) {
        Date newDate(dayValue->GetValue(), monthValue->GetValue(), yearValue->GetValue());
        if (collection.getCollection().find(newDate.toString()) != collection.getCollection().end() &&
            activityIDValue->GetValue() <
            collection.getCollection().at(newDate.toString())->getActivityRegister().size()) {
            collection.getCollection().at(newDate.toString())->modifyDescriptionActivity(activityIDValue->GetValue(),
                                                                                         descriptionText->GetValue().ToStdString());
            update();
        } else {
            wxMessageDialog *alert = new wxMessageDialog(NULL, wxT("L'attivita selezionata non esiste"),
                                                         wxT("Attività non modificata"), wxOK);
            alert->ShowModal();
        }
    }

    virtual void removeActivityButtonOnButtonClick(wxCommandEvent &event) {
        Date newDate(dayValue->GetValue(), monthValue->GetValue(), yearValue->GetValue());
        if (collection.getCollection().find(newDate.toString()) != collection.getCollection().end() &&
            activityIDValue->GetValue() <
            collection.getCollection().at(newDate.toString())->getActivityRegister().size()) {
            collection.getCollection().at(newDate.toString())->removeActivity(activityIDValue->GetValue());
            if (collection.getCollection().find(newDate.toString())->second->getActivityRegister().empty())
                collection.detachRegister(newDate.toString());
        } else {
            wxMessageDialog *alert = new wxMessageDialog(NULL, wxT("L'attivita selezionata non esiste"),
                                                         wxT("Attivita' non rimossa"), wxOK);
            alert->ShowModal();
        }
        update();
    }

    virtual void modifyTimeActivityButtonOnButtonClick(wxCommandEvent &event) {
        Time startTime(hourStartValue->GetValue(), minutesStartValue->GetValue());
        Time endTime(hourEndValue->GetValue(), minutesEndValue->GetValue());
        Date newDate(dayValue->GetValue(), monthValue->GetValue(), yearValue->GetValue());
        if (collection.getCollection().find(newDate.toString()) != collection.getCollection().end() &&
            activityIDValue->GetValue() <
            collection.getCollection().at(newDate.toString())->getActivityRegister().size()) {
            collection.getCollection().at(newDate.toString())->modifyTimeActivity(activityIDValue->GetValue(),
                                                                                  startTime, endTime);
            update();
        } else {
            wxMessageDialog *alert = new wxMessageDialog(NULL, wxT("L'attivita selezionata non esiste"),
                                                         wxT("Attività non modificata"), wxOK);
            alert->ShowModal();
        }
    }

    virtual void viewRegisterButtonOnButtonClick(wxCommandEvent &event) {
        update();
    }

    virtual void modifyActivityButtonOnButtonClick(wxCommandEvent &event) {
        Time startTime(hourStartValue->GetValue(), minutesStartValue->GetValue());
        Time endTime(hourEndValue->GetValue(), minutesEndValue->GetValue());
        Date newDate(dayValue->GetValue(), monthValue->GetValue(), yearValue->GetValue());
        if (collection.getCollection().find(newDate.toString()) != collection.getCollection().end() &&
            activityIDValue->GetValue() <
            collection.getCollection().at(newDate.toString())->getActivityRegister().size()) {
            collection.getCollection().at(newDate.toString())->modifyActivity(activityIDValue->GetValue(),
                                                                              descriptionText->GetValue().ToStdString(),
                                                                              startTime, endTime);
            update();
        } else {
            wxMessageDialog *alert = new wxMessageDialog(NULL, wxT("L'attivita selezionata non esiste"),
                                                         wxT("Attività non modificata"), wxOK);
            alert->ShowModal();
        }
    }

    void update() {
        Date newDate(dayValue->GetValue(), monthValue->GetValue(), yearValue->GetValue());
        if (collection.getCollection().find(newDate.toString()) != collection.getCollection().end()) {
            wxString str(collection.getCollection().at(newDate.toString())->toString());
            listRegisterActivity->SetValue(str);
        } else
            listRegisterActivity->SetValue("");
    }

public:

    ViewFrame(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxT("ActivityTracker"),
              const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(700, 800),
              long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

    ~ViewFrame();

};


#endif //ACTIVITYTRACKER_VIEWFRAME_H
