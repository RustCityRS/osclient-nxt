// libs/graphics/runetek7/animation/AnimationStateProvider.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::graphics {
    class AnimationStateProvider {
    public:
        // virtual methods in vtable order
        virtual ~AnimationStateProvider();
        unsigned int GetLastFrameCount() const;
        AnimationStateProvider();
        void InvalidateAsyncUpdate();
        void GetBoneTransforms(math::Matrix43T<float>& matrix43,
                               const eastl::vector_map<unsigned short, unsigned short>& arg2,
                               const eastl::vector_map<unsigned short, unsigned short>& arg3,
                               const math::Matrix44T<float>& matrix44) const;
        AnimationStateProvider(AnimationStateProvider&& animationStateProvider);
        void WaitForAsyncTasks();
        void BeginAsyncTasks(ThreadPool& threadPool, unsigned int arg2, const Array<LabelData>& labelDatas,
                             const math::Matrix44T<float>& matrix44);
        static int32_t m_useAsyncAnimUpdate; // = 1

    private:
        unsigned int m_lastFrameCount;
        uint8_t field_12;
        uint8_t _unknown_13[11];
    };

    class BindInfo {
    public:
        BindInfo();
        ~BindInfo();
        BindInfo(BindInfo&& loadingRequest);
        BindInfo* operator=(const BindInfo& bindInfo);

    private:
        uint8_t _unknown_0[16];
        bool field_16;
    };

    // 0x1001f3300
    AnimationStateProvider::AnimationStateProvider() : m_lastFrameCount(2147483647), field_12(0) {}

    // 0x1001f3330
    AnimationStateProvider::~AnimationStateProvider() {
        (&field_16)->~future();
    }

    // 0x10081e9b0
    void AnimationStateProvider::GetBoneTransforms(math::Matrix43T<float>& matrix43,
                                                   const eastl::vector_map<unsigned short, unsigned short>& arg2,
                                                   const eastl::vector_map<unsigned short, unsigned short>& arg3,
                                                   const math::Matrix44T<float>& matrix44) const {

        WrapArray<unsigned char> local_40(matrix43, 1);
        (*this->_vptr[1]._dtor)(this, &local_40, arg2, arg3, matrix44);
    }

    // 0x10096c160
    AnimationStateProvider::AnimationStateProvider(AnimationStateProvider&& animationStateProvider)
        : m_lastFrameCount(animationStateProvider.m_lastFrameCount), field_12(animationStateProvider.field_12),
          field_16(animationStateProvider.field_16) {}

    // 0x10098cbc0
    BindInfo* BindInfo::operator=(const BindInfo& bindInfo) {
        *this = bindInfo;
        field_16 = bindInfo.field_16;
        return this;
    }

    // 0x1009a63c0
    void AnimationStateProvider::BeginAsyncTasks(ThreadPool&, unsigned int, Array<LabelData> const&,
                                                 math::Matrix44T<float> const&)::$_8::operator()() const {
        (**(void (**)(...))(**(long**)this + 40))(*(long**)this, *(uint64_t*)(this + 8), *(uint64_t*)(this + 16));
    }

} // namespace jag::graphics

namespace jag {
    // 0x1001f3360
    ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::PoseStateProviderRSeven* poseStateProviderRSeven)
        : ref_counter_base() {}

    // 0x1001f33a0
    void ref_counter_shared<oldscape::dash3d::PoseStateProviderRSeven>::DeleteData() {
        long lVar1;
        ref_counter_shared<oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<
                              oldscape::rs2lib::social::ClanSettingsDelta::DeleteMember> _vtbl*)((long)&prVar2->_dtor +
                                                                                                 1);
                    lVar1 = lVar1 + 40;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1001f33f0
    graphics::Model*
    placement_new<graphics::Model, graphics::Model&, graphics::ModelCopyType>(void* arg1, graphics::Model& model,
                                                                              graphics::ModelCopyType&& modelCopyType) {
        new (arg1) graphics::Model(model, *(uint32_t*)modelCopyType);
        return arg1;
    }

    // 0x1001f3410
    ref_counter_shared<graphics::Model>*
    placement_new<ref_counter_shared<graphics::Model>, int, graphics::Model*&>(void* arg1, int&& arg2,
                                                                               graphics::Model*& arg3) {
        new (arg1) ref_counter_shared<graphics::Model>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1001f3440
    ref_counter_shared<graphics::Model>::ref_counter_shared(unsigned long arg1, graphics::Model* model)
        : ref_counter_base() {}

    // 0x1001f3480
    void ref_counter_shared<graphics::Model>::DeleteData() {
        long lVar1;
        ref_counter_shared<graphics::Model> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<graphics::Model> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 944;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

} // namespace jag

namespace jag::oldscape {
    // 0x1001f4080
    NoJs5ResourceProvider::~NoJs5ResourceProvider() {}

} // namespace jag::oldscape
