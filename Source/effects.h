/*
  ==============================================================================

    effects.h
    Created: 8 Jan 2024 1:13:43am
    Author:  Pmhar

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include <juce_gui_basics/juce_gui_basics.h>



//==============================================================================
/*
*/
class effects  : public juce::Component,
    private juce::ComboBox::Listener
{
public:
    effects();
    ~effects() override;

    void paint (juce::Graphics&) override;
    void resized() override;

    void comboBoxChanged(juce::ComboBox*) override;

private:

   juce::ComboBox effectlist;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (effects)
};
