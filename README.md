# Lab 5
This is the Lab 5 repository for Stein Witt and James Semerad. The repository contains timer.c, gpio_interrupt.c, task_delay.c, and sleep.c in the src directory.

## sleep.c
Toggles an out pin separated by a busy loop that does resource-intensive calculations.

## rtc.c
Shows RTC timekeeping alarm functionality

## task_delay.c
Delays the task at hand, used to show the delay in the oscilloscope

## timer.c
The same as task_delay, but uses a timer to log the difference in timekeeping

# Image description
Below is a description of each image in the repository

## TimekeepingAccuracy.PNG
Shows the accuracy of the oscilloscope when tracking sleep.c

## UnchangedTimer.c
Control for task_delay, shows how it functions undelayed w/ the oscilloscope

## TimerDelayWithBusyLoop.PNG
Shows the delay after the busy loop is added to task_delay.c

## SleepNotModified.PNG
Tracking sleep.c on the oscilloscope without the addition of the busy loop

## SleepBusyLoop.PNG
Tracking sleep.c with an added busy loop

## Trigger.PNG
Measuring the accuracy of the interrupt handler.
Sync output was used from signal generator, used as the trigger for the oscilloscope.
Then, the sync signal/output were compared using the oscilloscope.
