# MIDI Controller Footswitch Pedal

After testing multiple pedalboard MIDI controllers, he need to build one from scratch became clear.

This project contains the brains that powers a 6 footswitch control pedal that is easily scalable.

## Introduction

This projects aims to deliver a simple and scalable Arduino-based MIDI controller. The current implementation contains 6 footswitches configured in 4 different control layers that can be selected by any defined inputs.

The layout is quite simple, it only takes a few hours to assemble and the total cost should be around 50€ using hifh quality components.

<p align="center"><img src="/Layout.png" alt="SCHEMATIC LAYOUT"></p>

## Features

 - Fully programmable press, release and hold functions for sending MIDI messages.
 
 - Layer selection for additional functions. The code has 4 layers but it can be easily scaled.
 
 - Configurable expression pedal routing to a different channel and CC for each layer.
