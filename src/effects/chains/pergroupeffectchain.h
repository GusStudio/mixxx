#pragma once

#include "effects/effectchain.h"

/// PerGroupEffectChain is a base class hardwired for one input channel.
/// The routing switches are not presented to the user.
class PerGroupEffectChain : public EffectChain {
  public:
    PerGroupEffectChain(const QString& group,
            const QString& chainSlotGroup,
            SignalProcessingStage stage,
            EffectsManager* pEffectsManager,
            EffectsMessengerPointer pEffectsMessenger);
};
