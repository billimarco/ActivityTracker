//
// Created by maruko on 15/07/21.
//

#ifndef ACTIVITYTRACKER_APP_H
#define ACTIVITYTRACKER_APP_H

#include <wx/wxprec.h>

#ifndef WX_PRECOMP

#include <wx/wx.h>

#endif

class App : public wxApp {
public:
    App() {};

    ~App() = default;

    bool OnInit();
};

DECLARE_APP(App);

#endif //ACTIVITYTRACKER_APP_H
