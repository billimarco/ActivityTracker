//
// Created by maruko on 15/07/21.
//

#include "App.h"
#include "ViewFrame.h"

wxIMPLEMENT_APP(App);

bool App::OnInit() {
    if (!wxApp::OnInit())
        return false;
    ViewFrame *frame = new ViewFrame(nullptr, wxID_HIGHEST + 1, "ActivityTracker");
    frame->Show();
    return true;
}
