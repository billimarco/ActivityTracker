//
// Created by maruko on 14/07/21.
//
///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Oct 26 2018)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "ViewFrame.h"

///////////////////////////////////////////////////////////////////////////

ViewFrame::ViewFrame(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &pos, const wxSize &size,
                     long style) : wxFrame(parent, id, title, pos, size, style) {
    this->SetSizeHints(wxSize(700, 800), wxSize(700, 800));

    wxBoxSizer *mainSizer;
    mainSizer = new wxBoxSizer(wxVERTICAL);

    wxBoxSizer *secondarySizer;
    secondarySizer = new wxBoxSizer(wxVERTICAL);

    activityManagerLabel = new wxStaticText(this, wxID_ANY, wxT("Activity Manager"), wxDefaultPosition, wxSize(-1, 35),
                                            wxALIGN_CENTER_HORIZONTAL);
    activityManagerLabel->Wrap(-1);
    activityManagerLabel->SetFont(
            wxFont(20, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    secondarySizer->Add(activityManagerLabel, 0, wxALL | wxEXPAND, 5);

    wxGridSizer *activityIDSizer;
    activityIDSizer = new wxGridSizer(0, 2, 0, 0);

    wxBoxSizer *datePickerSizer;
    datePickerSizer = new wxBoxSizer(wxVERTICAL);

    descriptionLabel = new wxStaticText(this, wxID_ANY, wxT("Description:"), wxDefaultPosition, wxSize(-1, 28),
                                        wxALIGN_CENTER_HORIZONTAL);
    descriptionLabel->Wrap(-1);
    descriptionLabel->SetFont(
            wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    datePickerSizer->Add(descriptionLabel, 0, wxALL | wxEXPAND, 5);

    descriptionText = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxSize(-1, -1), wxTE_MULTILINE);
    datePickerSizer->Add(descriptionText, 1, wxALL | wxEXPAND, 5);


    activityIDSizer->Add(datePickerSizer, 1, wxEXPAND, 5);

    wxBoxSizer *idActivitySizer;
    idActivitySizer = new wxBoxSizer(wxVERTICAL);

    dateLabel = new wxStaticText(this, wxID_ANY, wxT("Date"), wxDefaultPosition, wxSize(-1, 28),
                                 wxALIGN_CENTER_HORIZONTAL);
    dateLabel->Wrap(-1);
    dateLabel->SetFont(wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    idActivitySizer->Add(dateLabel, 0, wxALL | wxEXPAND, 5);

    wxGridSizer *gSizer6;
    gSizer6 = new wxGridSizer(0, 2, 0, 0);

    dayLabel = new wxStaticText(this, wxID_ANY, wxT("Day: "), wxDefaultPosition, wxDefaultSize,
                                wxALIGN_CENTER_HORIZONTAL);
    dayLabel->Wrap(-1);
    dayLabel->SetFont(wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    gSizer6->Add(dayLabel, 1, wxALL | wxEXPAND, 5);

    dayValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
                              wxALIGN_CENTER_HORIZONTAL | wxSP_ARROW_KEYS, 1, 31, 0);
    gSizer6->Add(dayValue, 1, wxALL | wxEXPAND, 5);

    monthLabel = new wxStaticText(this, wxID_ANY, wxT("Month: "), wxDefaultPosition, wxDefaultSize,
                                  wxALIGN_CENTER_HORIZONTAL);
    monthLabel->Wrap(-1);
    monthLabel->SetFont(
            wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    gSizer6->Add(monthLabel, 0, wxALL | wxEXPAND, 5);

    monthValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
                                wxALIGN_CENTER_HORIZONTAL | wxSP_ARROW_KEYS, 1, 12, 0);
    gSizer6->Add(monthValue, 1, wxALL | wxEXPAND, 5);

    yearLabel = new wxStaticText(this, wxID_ANY, wxT("Year: "), wxDefaultPosition, wxDefaultSize,
                                 wxALIGN_CENTER_HORIZONTAL);
    yearLabel->Wrap(-1);
    yearLabel->SetFont(wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    gSizer6->Add(yearLabel, 1, wxALL | wxEXPAND, 5);

    yearValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
                               wxALIGN_CENTER_HORIZONTAL | wxSP_ARROW_KEYS, 1920, 2100, 0);
    gSizer6->Add(yearValue, 1, wxALL | wxEXPAND, 5);


    idActivitySizer->Add(gSizer6, 1, wxEXPAND, 5);

    activityIDLabel = new wxStaticText(this, wxID_ANY, wxT("Activity Number: "), wxDefaultPosition, wxSize(-1, 28),
                                       wxALIGN_CENTER_HORIZONTAL);
    activityIDLabel->Wrap(-1);
    activityIDLabel->SetFont(
            wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    idActivitySizer->Add(activityIDLabel, 0, wxALL | wxEXPAND, 5);

    activityIDValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
                                     wxALIGN_CENTER_HORIZONTAL | wxSP_ARROW_KEYS, 0, 99, 0);
    activityIDValue->SetFont(
            wxFont(wxNORMAL_FONT->GetPointSize(), wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false,
                   wxEmptyString));

    idActivitySizer->Add(activityIDValue, 0, wxALL | wxALIGN_CENTER_HORIZONTAL, 5);


    activityIDSizer->Add(idActivitySizer, 1, wxEXPAND, 5);


    secondarySizer->Add(activityIDSizer, 0, wxEXPAND, 5);

    wxGridSizer *timeSizer;
    timeSizer = new wxGridSizer(0, 2, 0, 0);

    wxBoxSizer *startTimeSizer;
    startTimeSizer = new wxBoxSizer(wxVERTICAL);

    startTimeActivityLabel = new wxStaticText(this, wxID_ANY, wxT("Start Time Activity:"), wxDefaultPosition,
                                              wxSize(-1, 28), wxALIGN_CENTER_HORIZONTAL);
    startTimeActivityLabel->Wrap(-1);
    startTimeActivityLabel->SetFont(
            wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    startTimeSizer->Add(startTimeActivityLabel, 0, wxALL | wxEXPAND, 5);

    wxGridSizer *startTimeActivitySizer;
    startTimeActivitySizer = new wxGridSizer(0, 2, 0, 0);

    hourStartLabel = new wxStaticText(this, wxID_ANY, wxT("Hour"), wxDefaultPosition, wxSize(-1, -1),
                                      wxALIGN_CENTER_HORIZONTAL);
    hourStartLabel->Wrap(-1);
    hourStartLabel->SetFont(
            wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    startTimeActivitySizer->Add(hourStartLabel, 0, wxALL | wxEXPAND, 5);

    hourStartValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0,
                                    23, 0);
    startTimeActivitySizer->Add(hourStartValue, 1, wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

    minutesStartLabel = new wxStaticText(this, wxID_ANY, wxT("Minutes"), wxDefaultPosition, wxDefaultSize,
                                         wxALIGN_CENTER_HORIZONTAL);
    minutesStartLabel->Wrap(-1);
    minutesStartLabel->SetFont(
            wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    startTimeActivitySizer->Add(minutesStartLabel, 0, wxALL | wxEXPAND, 5);

    minutesStartValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS,
                                       0, 59, 0);
    startTimeActivitySizer->Add(minutesStartValue, 1, wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);


    startTimeSizer->Add(startTimeActivitySizer, 1, wxEXPAND, 5);


    timeSizer->Add(startTimeSizer, 1, wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);

    wxBoxSizer *endTImeSizer;
    endTImeSizer = new wxBoxSizer(wxVERTICAL);

    endTimeActivityLabel = new wxStaticText(this, wxID_ANY, wxT("End Time Activity:"), wxDefaultPosition,
                                            wxSize(-1, 28), wxALIGN_CENTER_HORIZONTAL);
    endTimeActivityLabel->Wrap(-1);
    endTimeActivityLabel->SetFont(
            wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    endTImeSizer->Add(endTimeActivityLabel, 0, wxALL | wxEXPAND, 5);

    wxGridSizer *endTimeActivitySizer;
    endTimeActivitySizer = new wxGridSizer(0, 2, 0, 0);

    hourEndLabel = new wxStaticText(this, wxID_ANY, wxT("Hour"), wxDefaultPosition, wxSize(-1, -1),
                                    wxALIGN_CENTER_HORIZONTAL);
    hourEndLabel->Wrap(-1);
    hourEndLabel->SetFont(
            wxFont(13, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    endTimeActivitySizer->Add(hourEndLabel, 0, wxALL | wxEXPAND, 5);

    hourEndValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0,
                                  23, 0);
    endTimeActivitySizer->Add(hourEndValue, 1, wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);

    minutesEndLabel = new wxStaticText(this, wxID_ANY, wxT("Minutes"), wxDefaultPosition, wxDefaultSize,
                                       wxALIGN_CENTER_HORIZONTAL);
    minutesEndLabel->Wrap(-1);
    minutesEndLabel->SetFont(
            wxFont(14, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_NORMAL, false, wxEmptyString));

    endTimeActivitySizer->Add(minutesEndLabel, 0, wxALL | wxEXPAND, 5);

    minutesEndValue = new wxSpinCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS,
                                     0, 59, 0);
    endTimeActivitySizer->Add(minutesEndValue, 1, wxALL | wxALIGN_CENTER_VERTICAL | wxEXPAND, 5);


    endTImeSizer->Add(endTimeActivitySizer, 1, wxEXPAND, 5);


    timeSizer->Add(endTImeSizer, 1, wxEXPAND | wxALIGN_CENTER_VERTICAL, 5);


    secondarySizer->Add(timeSizer, 0, wxEXPAND, 5);

    wxGridSizer *buttonsSizer;
    buttonsSizer = new wxGridSizer(0, 2, 0, 0);

    addActivityButton = new wxButton(this, wxID_ANY, wxT("Add Activity"), wxDefaultPosition, wxDefaultSize, 0);
    buttonsSizer->Add(addActivityButton, 0, wxALL | wxEXPAND, 5);

    modifyActivityDescriptionButton = new wxButton(this, wxID_ANY, wxT("Modify Description"), wxDefaultPosition,
                                                   wxDefaultSize, 0);
    buttonsSizer->Add(modifyActivityDescriptionButton, 0, wxALL | wxEXPAND, 5);

    removeActivityButton = new wxButton(this, wxID_ANY, wxT("Remove Activity"), wxDefaultPosition, wxDefaultSize, 0);
    buttonsSizer->Add(removeActivityButton, 0, wxALL | wxEXPAND, 5);

    modifyTimeActivityButton = new wxButton(this, wxID_ANY, wxT("Modify Time"), wxDefaultPosition, wxDefaultSize, 0);
    buttonsSizer->Add(modifyTimeActivityButton, 0, wxALL | wxEXPAND, 5);

    viewRegisterButton = new wxButton(this, wxID_ANY, wxT("View Register"), wxDefaultPosition, wxDefaultSize, 0);
    buttonsSizer->Add(viewRegisterButton, 0, wxALL | wxEXPAND, 5);

    modifyActivityButton = new wxButton(this, wxID_ANY, wxT("Modify Activity"), wxDefaultPosition, wxDefaultSize, 0);
    buttonsSizer->Add(modifyActivityButton, 0, wxALL | wxEXPAND, 5);


    secondarySizer->Add(buttonsSizer, 0, wxEXPAND, 5);

    listRegisterActivity = new wxTextCtrl(this, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize,
                                          wxTE_MULTILINE | wxTE_READONLY);
    listRegisterActivity->Enable(true);

    secondarySizer->Add(listRegisterActivity, 1, wxALL | wxEXPAND, 5);


    mainSizer->Add(secondarySizer, 1, wxEXPAND, 5);


    this->SetSizer(mainSizer);
    this->Layout();

    this->Centre(wxBOTH);

    // Connect Events
    dayValue->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxCommandEventHandler(ViewFrame::dateChangedOnSpinUpdate), NULL,
                      this);
    monthValue->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxCommandEventHandler(ViewFrame::dateChangedOnSpinUpdate), NULL,
                        this);
    yearValue->Connect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxCommandEventHandler(ViewFrame::dateChangedOnSpinUpdate), NULL,
                       this);
    addActivityButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                               wxCommandEventHandler(ViewFrame::addActivityButtonOnButtonClick), NULL, this);
    modifyActivityDescriptionButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(
            ViewFrame::modifyActivityDescriptionButtonOnButtonClick), NULL, this);
    removeActivityButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                                  wxCommandEventHandler(ViewFrame::removeActivityButtonOnButtonClick), NULL, this);
    modifyTimeActivityButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                                      wxCommandEventHandler(ViewFrame::modifyTimeActivityButtonOnButtonClick), NULL,
                                      this);
    viewRegisterButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                                wxCommandEventHandler(ViewFrame::viewRegisterButtonOnButtonClick), NULL, this);
    modifyActivityButton->Connect(wxEVT_COMMAND_BUTTON_CLICKED,
                                  wxCommandEventHandler(ViewFrame::modifyActivityButtonOnButtonClick), NULL, this);
}

ViewFrame::~ViewFrame() {
    // Disconnect Events
    dayValue->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxCommandEventHandler(ViewFrame::dateChangedOnSpinUpdate),
                         NULL, this);
    monthValue->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxCommandEventHandler(ViewFrame::dateChangedOnSpinUpdate),
                           NULL, this);
    yearValue->Disconnect(wxEVT_COMMAND_SPINCTRL_UPDATED, wxCommandEventHandler(ViewFrame::dateChangedOnSpinUpdate),
                          NULL, this);
    addActivityButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                  wxCommandEventHandler(ViewFrame::addActivityButtonOnButtonClick), NULL, this);
    modifyActivityDescriptionButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED, wxCommandEventHandler(
            ViewFrame::modifyActivityDescriptionButtonOnButtonClick), NULL, this);
    removeActivityButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                     wxCommandEventHandler(ViewFrame::removeActivityButtonOnButtonClick), NULL, this);
    modifyTimeActivityButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                         wxCommandEventHandler(ViewFrame::modifyTimeActivityButtonOnButtonClick), NULL,
                                         this);
    viewRegisterButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                   wxCommandEventHandler(ViewFrame::viewRegisterButtonOnButtonClick), NULL, this);
    modifyActivityButton->Disconnect(wxEVT_COMMAND_BUTTON_CLICKED,
                                     wxCommandEventHandler(ViewFrame::modifyActivityButtonOnButtonClick), NULL, this);

}