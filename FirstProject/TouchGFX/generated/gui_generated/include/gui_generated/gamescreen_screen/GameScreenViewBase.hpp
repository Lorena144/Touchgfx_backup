/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef GAMESCREENVIEWBASE_HPP
#define GAMESCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/gamescreen_screen/GameScreenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/ButtonWithIcon.hpp>
#include <touchgfx/widgets/TextArea.hpp>

class GameScreenViewBase : public touchgfx::View<GameScreenPresenter>
{
public:
    GameScreenViewBase();
    virtual ~GameScreenViewBase() {}
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
    touchgfx::ButtonWithIcon BtnBack;
    touchgfx::TextArea txtinfoplayer;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<GameScreenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // GAMESCREENVIEWBASE_HPP
