// libs/game/runetek5/scene/entities/LocationAnimatedModel.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag {
    // 0x100439e00, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::VFXAttachmentInfo* placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData const&, math::Matrix44T<float> const&>(void*, graphics::VFXAttachmentInfo::RawData const&, math::Matrix44T<float> const&)
    /* graphics::VFXAttachmentInfo* placement_new<graphics::VFXAttachmentInfo,
   graphics::VFXAttachmentInfo::RawData const&, math::Matrix44T<float>&>(void*,
   graphics::VFXAttachmentInfo::RawData const&, math::Matrix44T<float>&) */

    VFXAttachmentInfo* jag::placement_new<graphics::VFXAttachmentInfo, graphics::VFXAttachmentInfo::RawData_const&,
                                          math::Matrix44T<float>&>(void* param_1, RawData* param_2,
                                                                   Matrix44T* param_3) {
        graphics::VFXAttachmentInfo::VFXAttachmentInfo(param_1, param_2, param_3);
        return param_1;
    }

    // 0x100439e20, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::VFXAttachmentInfo>* placement_new<ref_counter_shared<graphics::VFXAttachmentInfo>, int, graphics::VFXAttachmentInfo*&>(void*, int&&, graphics::VFXAttachmentInfo*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<graphics::VFXAttachmentInfo>, int, graphics::VFXAttachmentInfo*&>(
        void* param_1, int* param_2, VFXAttachmentInfo** param_3) {
        ref_counter_shared<graphics::VFXAttachmentInfo>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100439e40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::VFXAttachmentInfo>::ref_counter_shared(unsigned long, graphics::VFXAttachmentInfo*): jumps straight to the base-object constructor

    // 0x100439e50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::VFXAttachmentInfo>::ref_counter_shared(unsigned long, graphics::VFXAttachmentInfo*)
    void ref_counter_shared<graphics::VFXAttachmentInfo>::ref_counter_shared(ulong param_1,
                                                                             VFXAttachmentInfo* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7538 + 16;
        *(ulong*)(this + 16) = param_1;
        *(VFXAttachmentInfo**)(this + 24) = param_2;
    }

    // 0x100439e90, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::VFXAttachmentInfo>::DeleteData()
    void ref_counter_shared<graphics::VFXAttachmentInfo>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~VFXAttachmentInfo();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 224;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

} // namespace jag

namespace jag::game {
    class LocationAnimatedModel : public AnimatedModel // base inferred from shared vtable slots
    {
    public:
        // virtual methods in vtable order
        virtual ~LocationAnimatedModel();
        virtual void RepeatLastOverrideAnimationFrameWhenFinished(int) const;
        virtual void GetDefaultModels(AnimatedModelPair&, int) const;
        virtual void GetOverrideModels(AnimatedModelPair&, int) const;
        LocationAnimatedModel(graphics::RT7Core&, AssetBuilder&, ConfigProvider&, graphics::AnimationLoopBehaviour,
                              bool, std::function<void(int, int, int, int, int, int)> const&, Location&);

        // data members, from how the methods use this: 2360 bytes, the first 2352 are AnimatedModel
        Location* field_2352; // offset 2352
    };

    // 0x100439cd0, 32 bytes, complete-object constructor, inline, placed by class name and debug map
    // LocationAnimatedModel::LocationAnimatedModel(graphics::RT7Core&, AssetBuilder&, ConfigProvider&, graphics::AnimationLoopBehaviour, bool, std::function<void (int, int, int, int, int, int)> const&, Location&)
    /* LocationAnimatedModel::LocationAnimatedModel(graphics::RT7Core&,
   AssetBuilder&, ConfigProvider&, graphics::AnimationLoopBehaviour,
   bool, std::function<void (int, int, int, int, int, int)> const&, Location&) */

    void LocationAnimatedModel::LocationAnimatedModel() {
        LocationAnimatedModel();
    }

    // 0x100439d00, 64 bytes, base-object constructor, inline, placed by class name and debug map
    // LocationAnimatedModel::LocationAnimatedModel(graphics::RT7Core&, AssetBuilder&, ConfigProvider&, graphics::AnimationLoopBehaviour, bool, std::function<void (int, int, int, int, int, int)> const&, Location&)
    /* LocationAnimatedModel::LocationAnimatedModel(graphics::RT7Core&,
   AssetBuilder&, ConfigProvider&, graphics::AnimationLoopBehaviour,
   bool, std::function<void (int, int, int, int, int, int)> const&, Location&) */

    void LocationAnimatedModel::LocationAnimatedModel() {
        Location* in_stack_00000010;

        AnimatedModel::AnimatedModel();
        field_0 = &PTR__LocationAnimatedModel_100effdd8;
        field_2352 = in_stack_00000010;
    }

} // namespace jag::game
