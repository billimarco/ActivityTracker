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
#include <wx/spinctrl.h>
#include <wx/sizer.h>
#include <wx/calctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/dataview.h>
#include <wx/frame.h>

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
    wxStaticText *activityIDLabel;
    wxSpinCtrl *activityIDValue;
    wxStaticText *startTimeActivityLabel;
    wxStaticText *hourStartLabel;
    wxSpinCtrl *hourStartValue;
    wxStaticText *minutesStartLabel;
    wxSpinCtrl *m_spinCtrl7;
    wxStaticText *endTimeActivityLabel;
    wxStaticText *hourEndLabel;
    wxSpinCtrl *hourEndValue;
    wxStaticText *minutesEndLabel;
    wxSpinCtrl *minutesEndValue;
    wxCalendarCtrl *dateCalendar;
    wxButton *addActivityButton;
    wxButton *modifyActivityDescriptionButton;
    wxButton *removeActivityButton;
    wxButton *modifyTimeActivityButton;
    wxButton *viewRegisterButton;
    wxButton *modifyActivityButton;
    wxDataViewListCtrl *listRegisterActivities;

    // Virtual event handlers, overide them in your derived class
    virtual void addActivityButtonOnButtonClick(wxCommandEvent &event) { event.Skip(); }

    virtual void modifyActivityDescriptionButtonOnButtonClick(wxCommandEvent &event) { event.Skip(); }

    virtual void removeActivityButtonOnButtonClick(wxCommandEvent &event) { event.Skip(); }

    virtual void modifyTimeActivityButtonOnButtonClick(wxCommandEvent &event) { event.Skip(); }

    virtual void viewRegisterButtonOnButtonClick(wxCommandEvent &event) { event.Skip(); }

    virtual void modifyActivityButtonOnButtonClick(wxCommandEvent &event) { event.Skip(); }


public:

    ViewFrame(wxWindow *parent, wxWindowID id = wxID_ANY, const wxString &title = wxT("ActivityTracker"),
              const wxPoint &pos = wxDefaultPosition, const wxSize &size = wxSize(700, 800),
              long style = wxDEFAULT_FRAME_STYLE | wxTAB_TRAVERSAL);

    ~ViewFrame();

};


#endif //ACTIVITYTRACKER_VIEWFRAME_H
