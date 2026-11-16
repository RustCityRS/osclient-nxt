// libs/game/runetek5/scene/entities/LocationAnimatedModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    // 0x100439e00
    graphics::VFXAttachmentInfo*
    placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData const&,
                  math::Matrix44T<float> const&>(void* arg1, const graphics::VFXAttachmentInfo::RawData& rawData,
                                                 const math::Matrix44T<float>& matrix44) {
        new (arg1) graphics::VFXAttachmentInfo(rawData, matrix44);
        return arg1;
    }

    // 0x100439e20
    ref_counter_shared<graphics::VFXAttachmentInfo>*
    placement_new<ref_counter_shared<graphics::VFXAttachmentInfo>, int, graphics::VFXAttachmentInfo*&>(
        void* arg1, int&& arg2, graphics::VFXAttachmentInfo*& arg3) {
        new (arg1) ref_counter_shared<graphics::VFXAttachmentInfo>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100439e50
    ref_counter_shared<graphics::VFXAttachmentInfo>::ref_counter_shared(unsigned long arg1,
                                                                        graphics::VFXAttachmentInfo* vfxAttachmentInfo)
        : ref_counter_base() {}

    // 0x100439e90
    void ref_counter_shared<graphics::VFXAttachmentInfo>::DeleteData() {
        ref_counter_shared<graphics::VFXAttachmentInfo> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((VFXAttachmentInfo*)((long)&(this[3]._vptr)->_dtor + lVar2))->~VFXAttachmentInfo();
                    prVar1 = (ref_counter_shared<graphics::VFXAttachmentInfo> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 224;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::game {
    class LocationAnimatedModel : public AnimatedModel // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LocationAnimatedModel();
        virtual void RepeatLastOverrideAnimationFrameWhenFinished(int arg1) const;
        virtual void GetDefaultModels(AnimatedModelPair& animatedModelPair, int arg2) const;
        virtual void GetOverrideModels(AnimatedModelPair& animatedModelPair, int arg2) const;
        LocationAnimatedModel(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder, ConfigProvider& configProvider,
                              graphics::AnimationLoopBehaviour animationLoopBehaviour, bool arg5,
                              const std::function<void(int, int, int, int, int, int)>& callback, Location& location);

    private:
        Location* field_2352;
    };

    // 0x100439d00
    LocationAnimatedModel::LocationAnimatedModel(graphics::RT7Core& rt7Core, AssetBuilder& assetBuilder,
                                                 ConfigProvider& configProvider,
                                                 graphics::AnimationLoopBehaviour animationLoopBehaviour, bool arg5,
                                                 const std::function<void(int, int, int, int, int, int)>& callback,
                                                 Location& location)
        : AnimatedModel(rt7Core, assetBuilder, configProvider, animationLoopBehaviour, arg5, callback),
          field_2352(location) {}

} // namespace jag::game
