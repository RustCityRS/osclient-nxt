// libs/graphics/runetek7/effects/vertexanimation/VertexAnimation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics {
    class VertexAnimation {
    public:
        GetBoneTransforms() const;
        GetAnimationStateProvider() const;
        VertexAnimation(VertexAnimation&&);
        VertexAnimation(VertexAnimation const&);
        bool GetAnimatesTransparency() const;
        void ClearAnimationStateProvider();
        void SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&);
        void SetMaxSize(unsigned int, unsigned int, unsigned int);
        void SetShaderConstants(render::RenderContext&, Shader&) const;
        void DeferredUpdateAnimation(
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*);
        ulong DetermineHasTransparentLabels(
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const&)
            const;
        void UpdateAnimation(
            ThreadPool&, unsigned int,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*,
            eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator,
                              eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator>> const*,
            Array<LabelData, eastl::allocator> const&, math::Matrix44T<float> const&);
        void EndUpdateAnimation();
        VertexAnimation();
        ~VertexAnimation();

        // data members, from how the methods use this: 76 bytes
        char _unknown_0[48];
        shared_ptr field_48; // offset 48
        uint field_64;       // offset 64
        uint field_68;       // offset 68
        undefined1 field_72; // offset 72
        char _unknown_73[3];
    };

    // 0x10080d6b0, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VertexAnimation::VertexAnimation(VertexAnimation&&): jumps straight to the base-object constructor

    // 0x10080da00, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // VertexAnimation::VertexAnimation(VertexAnimation const&): jumps straight to the base-object constructor

    // 0x10082dba0, 80 bytes, base-object constructor, inline, placed by class name
    // VertexAnimation::VertexAnimation(VertexAnimation&&)
    void VertexAnimation::VertexAnimation(VertexAnimation* param_1) {
        uint uVar1;

        new (this) VertexTransformData(param_1);
        shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
            (shared_ptr<oldscape::RSevenDebugPresetProvider>*)field_48, (shared_ptr*)param_1->field_48);
        field_72 = param_1->field_72;
        uVar1 = param_1->field_68;
        field_64 = param_1->field_64;
        field_68 = uVar1;
    }

    // 0x10082dd60, 80 bytes, base-object constructor, inline, placed by class name
    // VertexAnimation::VertexAnimation(VertexAnimation const&)
    void VertexAnimation::VertexAnimation(VertexAnimation* param_1) {
        uint uVar1;

        new (this) VertexTransformData(param_1);
        new (field_48, (shared_ptr*)param_1->field_48) shared_ptr<oldscape::dash3d::Decor>();
        field_72 = param_1->field_72;
        uVar1 = param_1->field_68;
        field_64 = param_1->field_64;
        field_68 = uVar1;
    }

    // 0x10082de70, 64 bytes, inline, placed by class name
    // VertexAnimation::GetAnimatesTransparency() const
    bool VertexAnimation::GetAnimatesTransparency() {
        long* plVar3;

        if (field_48->operator_cast_to_bool()) {
            plVar3 =
                (long*)shared_ptr<AnimationStateProvider>::operator->((shared_ptr<AnimationStateProvider>*)field_48);
            if ((**(code**)(*plVar3 + 48))(plVar3) != '\0') {
                return field_72 != '\0';
            }
        }
        return false;
    }

    // 0x10082e160, 16 bytes, inline, placed by class name
    // VertexAnimation::ClearAnimationStateProvider()
    void VertexAnimation::ClearAnimationStateProvider() {
        shared_ptr<AnimationStateProvider>::reset();
    }

    // 0x1008669c0, 16 bytes, inline, placed by class name
    // VertexAnimation::SetAnimationStateProvider(shared_ptr<AnimationStateProvider> const&)
    void VertexAnimation::SetAnimationStateProvider(shared_ptr* param_1) {
        shared_ptr<AnimationStateProvider>::operator=((shared_ptr<AnimationStateProvider>*)field_48, param_1);
    }

    // 0x100866b00, 32 bytes, inline, placed by class name
    // VertexAnimation::SetMaxSize(unsigned int, unsigned int, unsigned int)
    void VertexAnimation::SetMaxSize(uint param_1, uint param_2, uint param_3) {
        SetMaxSize((ulong)param_1, (ulong)(param_2 << 2), (ulong)(param_3 << 3));
    }

    // 0x100989720, 16 bytes, complete-object constructor, inline, placed by class name
    // VertexAnimation::VertexAnimation(): jumps straight to the base-object constructor

    // 0x100989730, 16 bytes, complete-object destructor, inline, placed by class name
    // VertexAnimation::~VertexAnimation(): jumps straight to the base-object destructor

    // 0x1009917b0, 64 bytes, base-object constructor, inline, placed by class name
    // VertexAnimation::VertexAnimation()
    void VertexAnimation::VertexAnimation() {
        _func_decltype_nullptr* in_RSI;

        new (this) VertexTransformData();
        new (field_48, in_RSI) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>();
        field_64 = 2147483647;
        field_68 = 0;
        field_72 = 0;
    }

    // 0x1009917f0, 48 bytes, base-object destructor, inline, placed by class name
    // VertexAnimation::~VertexAnimation()
    void VertexAnimation::~VertexAnimation() {
        field_48->~shared_ptr();
        ~VertexTransformData();
    }

} // namespace jag::graphics

namespace jag::math {
    // 0x10080dd10, 64 bytes, inline, placed by debug map only (low confidence)
    // frand(float, float)
    float frand(float param_1, float param_2) {
        int iVar1;

        iVar1 = _rand();
        return (param_2 - param_1) * 4.656613e-10 * (float)iVar1 + param_1;
    }

} // namespace jag::math
