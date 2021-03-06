/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef CHECKINGSCREENVIEWBASE_HPP
#define CHECKINGSCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/checkingscreen_screen/CheckingScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/BoxWithBorder.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>

class CheckingScreenViewBase : public touchgfx::View<CheckingScreenPresenter>
{
public:
    CheckingScreenViewBase();
    virtual ~CheckingScreenViewBase() {}
    virtual void setupScreen();

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box boxbackground;
    touchgfx::BoxWithBorder boxxo;
    touchgfx::TextArea txtcheckplayer1;
    touchgfx::TextArea txtcheckplayer2;
    touchgfx::ToggleButton toggleBtn1;
    touchgfx::ToggleButton toggleBtn2;
    touchgfx::ButtonWithLabel BtnGo;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<CheckingScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // CHECKINGSCREENVIEWBASE_HPP
