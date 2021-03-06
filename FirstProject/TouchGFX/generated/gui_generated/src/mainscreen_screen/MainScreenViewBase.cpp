/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/mainscreen_screen/MainScreenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include "BitmapDatabase.hpp"
#include <texts/TextKeysAndLanguages.hpp>

MainScreenViewBase::MainScreenViewBase() :
    interaction1Counter(0),
    interaction2EndedCallback(this, &MainScreenViewBase::interaction2EndedCallbackHandler)
{

    __background.setPosition(0, 0, 240, 320);
    __background.setColor(touchgfx::Color::getColorFrom24BitRGB(0, 0, 0));

    boxbackground.setPosition(0, 0, 240, 320);
    boxbackground.setColor(touchgfx::Color::getColorFrom24BitRGB(210, 85, 85));

    usvpng.setXY(75, 91);
    usvpng.setBitmap(touchgfx::Bitmap(BITMAP_USV_ID));

    txtTitlu.setXY(47, 27);
    txtTitlu.setColor(touchgfx::Color::getColorFrom24BitRGB(37, 42, 169));
    txtTitlu.setLinespacing(0);
    txtTitlu.setTypedText(touchgfx::TypedText(T_SINGLEUSEID1));

    txtStudent.setPosition(18, 236, 204, 24);
    txtStudent.setColor(touchgfx::Color::getColorFrom24BitRGB(37, 42, 169));
    txtStudent.setLinespacing(0);
    txtStudent.setTypedText(touchgfx::TypedText(T_SINGLEUSEID2));

    txtGrupa.setPosition(19, 260, 203, 26);
    txtGrupa.setColor(touchgfx::Color::getColorFrom24BitRGB(37, 42, 169));
    txtGrupa.setLinespacing(0);
    txtGrupa.setTypedText(touchgfx::TypedText(T_SINGLEUSEID3));

    add(__background);
    add(boxbackground);
    add(usvpng);
    add(txtTitlu);
    add(txtStudent);
    add(txtGrupa);
}

void MainScreenViewBase::setupScreen()
{

}

//Handles delays
void MainScreenViewBase::handleTickEvent()
{
    if(interaction1Counter > 0)
    {
        interaction1Counter--;
        if(interaction1Counter == 0)
        {
            //Interaction2
            //When Interaction1 completed fade usvpng
            //Fade usvpng to alpha:0 with LinearIn easing in 1000 ms (60 Ticks)
            usvpng.clearFadeAnimationEndedAction();
            usvpng.startFadeAnimation(0, 60, touchgfx::EasingEquations::linearEaseIn);
            usvpng.setFadeAnimationEndedAction(interaction2EndedCallback);
        }
    }
}

//Called when the screen is done with transition/load
void MainScreenViewBase::afterTransition()
{
    //Interaction1
    //When screen is entered delay
    //Delay for 2000 ms (120 Ticks)
    interaction1Counter = INTERACTION1_DURATION;
}

void MainScreenViewBase::interaction2EndedCallbackHandler(const touchgfx::FadeAnimator<touchgfx::Image>& comp)
{
    //GoToScreen2
    //When Interaction2 completed change screen to SecondScreen
    //Go to SecondScreen with screen transition towards East
    application().gotoSecondScreenScreenSlideTransitionEast();
}
