#ifndef CHECKINGSCREENVIEW_HPP
#define CHECKINGSCREENVIEW_HPP

#include <gui_generated/checkingscreen_screen/CheckingScreenViewBase.hpp>
#include <gui/checkingscreen_screen/CheckingScreenPresenter.hpp>

class CheckingScreenView : public CheckingScreenViewBase
{
public:
    CheckingScreenView();
    virtual ~CheckingScreenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();
protected:
};

#endif // CHECKINGSCREENVIEW_HPP
