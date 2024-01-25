/*
  ==============================================================================

    effects.cpp
    Created: 8 Jan 2024 1:13:44am
    Author:  Pmhar

  ==============================================================================
*/

#include <JuceHeader.h>
#include "effects.h"
#include <juce_gui_basics/juce_gui_basics.h>



//==============================================================================
effects::effects()
{
    // In your constructor, you should add any child components, and
    // initialise any special settings that your component needs.

    setSize(200, 200);

    effectlist.addItem("UFO", 1);
    effectlist.addItem("Invader", 2);

    effectlist.setJustificationType(juce::Justification::centred);

    addAndMakeVisible(effectlist);
    effectlist.addListener(this);
}

effects::~effects()
{
}

void effects::paint (juce::Graphics& g)
{
    /* This demo code just fills the component's background and
       draws some placeholder text to get you started.

       You should replace everything in this method with your own
       drawing code..
    */

    g.fillAll (getLookAndFeel().findColour (juce::ResizableWindow::backgroundColourId));   // clear the background

    g.setColour (juce::Colours::grey);
    g.drawRect (getLocalBounds(), 1);   // draw an outline around the component

    g.setColour (juce::Colours::white);
    g.setFont (14.0f);
    g.drawText ("effects", getLocalBounds(),
                juce::Justification::centred, true);   // draw some placeholder text
}

void effects::resized()
{
    // This method is where you should set the bounds of any child
    // components that your component contains..

   // Rectangle<int> area = getLocalBounds().reduced(40);
    effectlist.setBounds(100, 100, getWidth() - 200, getHeight() - 200);
}
void effects::comboBoxChanged(juce::ComboBox* box)
{
}