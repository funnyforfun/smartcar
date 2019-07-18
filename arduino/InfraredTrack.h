#ifndef __INFRARED_TRACK_H_
#define __INFRARED_TRACK_H_

#include "SelfControl.h"

class InfraredTrack : public SelfControl
{
  public:
    InfraredTrack(uint8_t leftPin, uint8_t rightPin);
    ~InfraredTrack();

  protected:
    virtual void Execute(MotorDriver driver);
};

#endif