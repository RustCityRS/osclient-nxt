// libs/oldscape/jagex3/dash3d/PointLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x100327150
    shared_ptr_if_not_array<graphics::PointLight>::type
    make_shared<graphics::PointLight, math::Vector3T<float> const&, float, math::Vector4T<float>, float, float, bool>(
        const math::Vector3T<float>& vector3, float&& arg2, math::Vector4T<float>&& vector4, float&& arg4, float&& arg5,
        bool&& arg6) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        bool* in_stack_00000008;
        int local_44;
        PointLight* local_40[2];

        auto arg1 = aligned_alloc(64, 16);
        if (arg1 == nullptr) {
            new (vector3) shared_ptr();
        } else {
            local_40[0] =
                placement_new<graphics::PointLight, math::Vector3T<float> const&, float, math::Vector4T<float>, float,
                              float, bool>((void*)((long)arg1 + 16), (Vector3T<float>*)arg2, (float*)vector4,
                                           (Vector4T<float>*)arg4, arg5, (float*)arg6, in_stack_00000008);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared_trivial<graphics::PointLight>, int, graphics::PointLight*&>(
                    arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (vector3) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return vector3;
    }

    // 0x100327220
    graphics::PointLight*
    placement_new<graphics::PointLight, math::Vector3T<float> const&, float, math::Vector4T<float>, float, float, bool>(
        void* arg1, const math::Vector3T<float>& vector3, float&& arg3, math::Vector4T<float>&& vector4, float&& arg5,
        float&& arg6, bool&& arg7) {
        new (arg1) graphics::PointLight(vector3, arg3, vector4, arg5, arg6, arg7);
        return arg1;
    }

    // 0x100327260
    ref_counter_shared_trivial<graphics::PointLight>*
    placement_new<ref_counter_shared_trivial<graphics::PointLight>, int, graphics::PointLight*&>(
        void* arg1, int&& arg2, graphics::PointLight*& arg3) {
        new (arg1) ref_counter_shared_trivial<graphics::PointLight>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1003272d0
    ref_counter_shared_trivial<graphics::PointLight>::ref_counter_shared_trivial(unsigned long arg1,
                                                                                 graphics::PointLight* pointLight)
        : ref_counter_base() {}

    // 0x10032c230
    oldscape::dash3d::Square* placement_new<oldscape::dash3d::Square, int&, int&, int&>(void* arg1, int& arg2,
                                                                                        int& arg3, int& arg4) {
        new (arg1) oldscape::dash3d::Square(arg2, arg3, arg4);
        return arg1;
    }

    // 0x10032c250
    ref_counter_shared<oldscape::dash3d::Square>*
    placement_new<ref_counter_shared<oldscape::dash3d::Square>, int, oldscape::dash3d::Square*&>(
        void* arg1, int&& arg2, oldscape::dash3d::Square*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::Square>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10032c280
    ref_counter_shared<oldscape::dash3d::Square>::ref_counter_shared(unsigned long arg1,
                                                                     oldscape::dash3d::Square* square)
        : ref_counter_base() {}

    // 0x10032c2c0
    void ref_counter_shared<oldscape::dash3d::Square>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::Square> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((Square*)((long)&(this[3]._vptr)->_dtor + lVar2))->~Square();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::Square> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 408;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10032c500
    RenderState::ModelSubmissionRSeven* placement_new<RenderState::ModelSubmissionRSeven>(void* arg1) {
        *(uint64_t*)((long)arg1 + 160) = 0;
        *(uint64_t*)((long)arg1 + 168) = 0;
        *(uint64_t*)((long)arg1 + 144) = 0;
        *(uint64_t*)((long)arg1 + 152) = 0;
        *(uint64_t*)((long)arg1 + 128) = 0;
        *(uint64_t*)((long)arg1 + 136) = 0;
        *(uint64_t*)((long)arg1 + 112) = 0;
        *(uint64_t*)((long)arg1 + 120) = 0;
        *(uint64_t*)((long)arg1 + 96) = 0;
        *(uint64_t*)((long)arg1 + 104) = 0;
        *(uint64_t*)((long)arg1 + 80) = 0;
        *(uint64_t*)((long)arg1 + 88) = 0;
        *(uint64_t*)((long)arg1 + 64) = 0;
        *(uint64_t*)((long)arg1 + 72) = 0;
        *(uint64_t*)((long)arg1 + 48) = 0;
        *(uint64_t*)((long)arg1 + 56) = 0;
        *(uint64_t*)((long)arg1 + 32) = 0;
        *(uint64_t*)((long)arg1 + 40) = 0;
        *(uint64_t*)((long)arg1 + 16) = 0;
        *(uint64_t*)((long)arg1 + 24) = 0;
        *(uint64_t*)arg1 = 0;
        *(uint64_t*)((long)arg1 + 8) = 0;
        new (arg1) RenderState::ModelSubmissionRSeven();
        return arg1;
    }

    // 0x10032c550
    ref_counter_shared<RenderState::ModelSubmissionRSeven>*
    placement_new<ref_counter_shared<RenderState::ModelSubmissionRSeven>, int, RenderState::ModelSubmissionRSeven*&>(
        void* arg1, int&& arg2, RenderState::ModelSubmissionRSeven*& arg3) {
        new (arg1) ref_counter_shared<RenderState::ModelSubmissionRSeven>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10032c5d0
    ref_counter_shared<RenderState::ModelSubmissionRSeven>::ref_counter_shared(
        unsigned long arg1, RenderState::ModelSubmissionRSeven* modelSubmissionRSeven)
        : ref_counter_base() {}

    // 0x10032c610
    void ref_counter_shared<RenderState::ModelSubmissionRSeven>::DeleteData() {
        ref_counter_shared<RenderState::ModelSubmissionRSeven> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ModelSubmissionRSeven*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ModelSubmissionRSeven();
                    prVar1 = (ref_counter_shared<RenderState::ModelSubmissionRSeven> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 176;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10032efd0
    oldscape::dash3d::ShareLightCache*
    placement_new<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer const&>(
        void* arg1, const oldscape::dash3d::OperationBuffer& operationBuffer) {
        new (arg1) oldscape::dash3d::ShareLightCache(operationBuffer);
        return arg1;
    }

    // 0x10032eff0
    ref_counter_shared<oldscape::dash3d::ShareLightCache>*
    placement_new<ref_counter_shared<oldscape::dash3d::ShareLightCache>, int, oldscape::dash3d::ShareLightCache*&>(
        void* arg1, int&& arg2, oldscape::dash3d::ShareLightCache*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ShareLightCache>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10032f280
    ref_counter_shared<oldscape::dash3d::ShareLightCache>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::ShareLightCache* shareLightCache)
        : ref_counter_base() {}

    // 0x10032f2c0
    void ref_counter_shared<oldscape::dash3d::ShareLightCache>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::ShareLightCache> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ShareLightCache*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ShareLightCache();
                    prVar1 = (ref_counter_shared<oldscape::dash3d::ShareLightCache> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 160;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10032f3e0
    oldscape::dash3d::ShareLightOperation*
    placement_new<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&,
                  eastl::vector<oldscape::dash3d::ShareLightRequest>&>(
        void* arg1, shared_ptr<oldscape::dash3d::ShareLightCache>& shareLightCache,
        eastl::vector<oldscape::dash3d::ShareLightRequest>& shareLightRequests) {
        new (arg1) oldscape::dash3d::ShareLightOperation(shareLightCache, shareLightRequests);
        return arg1;
    }

    // 0x10032f400
    ref_counter_shared<oldscape::dash3d::ShareLightOperation>*
    placement_new<ref_counter_shared<oldscape::dash3d::ShareLightOperation>, int,
                  oldscape::dash3d::ShareLightOperation*&>(void* arg1, int&& arg2,
                                                           oldscape::dash3d::ShareLightOperation*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::ShareLightOperation>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10032f4e0
    ref_counter_shared<oldscape::dash3d::ShareLightOperation>::ref_counter_shared(
        unsigned long arg1, oldscape::dash3d::ShareLightOperation* shareLightOperation)
        : ref_counter_base() {}

    // 0x10032f520
    void ref_counter_shared<oldscape::dash3d::ShareLightOperation>::DeleteData() {
        ref_counter_shared<oldscape::dash3d::ShareLightOperation> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((ShareLightOperation*)((long)&(this[3]._vptr)->_dtor + lVar2))->~ShareLightOperation();
                    prVar1 =
                        (ref_counter_shared<oldscape::dash3d::ShareLightOperation> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 64;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x10032f5e0
    oldscape::graphics::animation::OldscapeJoint*
    placement_new<oldscape::graphics::animation::OldscapeJoint, int&, oldscape::PacketJ<Array<unsigned char>>&,
                  bool const&>(void* arg1, int& arg2, oldscape::PacketJ<Array<unsigned char>>& packetJ,
                               const bool& arg4) {
        new (arg1) oldscape::graphics::animation::OldscapeJoint(arg2, packetJ, arg4);
        return arg1;
    }

    // 0x10032f600
    ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>*
    placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>, int,
                  oldscape::graphics::animation::OldscapeJoint*&>(void* arg1, int&& arg2,
                                                                  oldscape::graphics::animation::OldscapeJoint*& arg3) {
        new (arg1) ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10032f630
    ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::ref_counter_shared(
        unsigned long arg1, oldscape::graphics::animation::OldscapeJoint* oldscapeJoint)
        : ref_counter_base() {}

    // 0x10032f670
    void ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::DeleteData() {
        ref_counter_shared<oldscape::graphics::animation::OldscapeJoint> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((OldscapeJoint*)((long)&(this[3]._vptr)->_dtor + lVar2))->~OldscapeJoint();
                    prVar1 =
                        (ref_counter_shared<oldscape::graphics::animation::OldscapeJoint> _vtbl*)((long)&prVar1->_dtor +
                                                                                                  1);
                    lVar2 = lVar2 + 448;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1003309d0
    oldscape::dash3d::Texture*
    placement_new<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char>>&, ErrorCapture&>(
        void* arg1, oldscape::PacketJ<Array<unsigned char>>& packetJ, ErrorCapture& errorCapture) {
        new (arg1) oldscape::dash3d::Texture(packetJ, errorCapture);
        return arg1;
    }

    // 0x1003309f0
    ref_counter_shared<oldscape::dash3d::Texture>*
    placement_new<ref_counter_shared<oldscape::dash3d::Texture>, int, oldscape::dash3d::Texture*&>(
        void* arg1, int&& arg2, oldscape::dash3d::Texture*& arg3) {
        new (arg1) ref_counter_shared<oldscape::dash3d::Texture>((long)*arg2, arg3);
        return arg1;
    }

    // 0x100330a20
    ref_counter_shared<oldscape::dash3d::Texture>::ref_counter_shared(unsigned long arg1,
                                                                      oldscape::dash3d::Texture* texture)
        : ref_counter_base() {}

    // 0x100330a60
    void ref_counter_shared<oldscape::dash3d::Texture>::DeleteData() {
        long lVar1;
        ref_counter_shared<game::Entity> _vtbl* prVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar1 = 0;
                prVar2 = nullptr;
                do {
                    (*(void (*)(...)) *
                     *(uint64_t**)((long)&(this[3]._vptr)->_dtor + lVar1))((long)&(this[3]._vptr)->_dtor + lVar1);
                    prVar2 = (ref_counter_shared<game::Entity> _vtbl*)((long)&prVar2->_dtor + 1);
                    lVar1 = lVar1 + 192;
                } while (prVar2 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x100331650
    graphics::GeometryBatch* placement_new<graphics::GeometryBatch>(void* arg1) {
        new (arg1) graphics::GeometryBatch();
        return arg1;
    }

    // 0x100331670
    ref_counter_shared<graphics::GeometryBatch>*
    placement_new<ref_counter_shared<graphics::GeometryBatch>, int, graphics::GeometryBatch*&>(
        void* arg1, int&& arg2, graphics::GeometryBatch*& arg3) {
        new (arg1) ref_counter_shared<graphics::GeometryBatch>((long)*arg2, arg3);
        return arg1;
    }

    // 0x1003316a0
    ref_counter_shared<graphics::GeometryBatch>::ref_counter_shared(unsigned long arg1,
                                                                    graphics::GeometryBatch* geometryBatch)
        : ref_counter_base() {}

    // 0x1003316e0
    void ref_counter_shared<graphics::GeometryBatch>::DeleteData() {
        ref_counter_shared<graphics::GeometryBatch> _vtbl* prVar1;
        long lVar2;

        if (this[3]._vptr != nullptr) {
            if (this[2]._vptr != nullptr) {
                lVar2 = 0;
                prVar1 = nullptr;
                do {
                    ((GeometryBatch*)((long)&(this[3]._vptr)->_dtor + lVar2))->~GeometryBatch();
                    prVar1 = (ref_counter_shared<graphics::GeometryBatch> _vtbl*)((long)&prVar1->_dtor + 1);
                    lVar2 = lVar2 + 2208;
                } while (prVar1 < this[2]._vptr);
            }
            this[3]._vptr = nullptr;
        }
    }

    // 0x1003318c0
    oldscape::dash3d::ModelRSevenUnlit*
    placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(
        void* arg1, shared_ptr<graphics::Model>&& model, bool&& arg3) {
        new (arg1) oldscape::dash3d::ModelRSevenUnlit(model, arg3);
        return arg1;
    }

    // 0x100332ec0
    oldscape::dash3d::QuickGround*
    placement_new<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int, int&, bool, bool>(
        void* arg1, int& arg2, int& arg3, int& arg4, int& arg5, int&& arg6, int& arg7, bool&& arg8, bool&& arg9) {
        new (arg1) oldscape::dash3d::QuickGround(arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
        return arg1;
    }

    // 0x100332f10
    ref_counter_shared_trivial<oldscape::dash3d::QuickGround>*
    placement_new<ref_counter_shared_trivial<oldscape::dash3d::QuickGround>, int, oldscape::dash3d::QuickGround*&>(
        void* arg1, int&& arg2, oldscape::dash3d::QuickGround*& arg3) {
        new (arg1) ref_counter_shared_trivial<oldscape::dash3d::QuickGround>((long)*arg2, arg3);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class PointLightSource {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual uint64_t GetUniqueID(unsigned long long& arg1) const;
        PointLightSource();
    };

    class ShareLightRequest {
    public:
        ~ShareLightRequest();
        ShareLightRequest(ShareLightRequest&& shareLightRequest);
        ShareLightRequest(const ShareLightRequest& shareLightRequest);

    private:
        uint8_t _unknown_0[21];
        uint64_t field_21;
    };

    // 0x1003270b0
    PointLightSource::PointLightSource() {}

    // 0x100327360
    FaceCollider::FaceWithIntermediates::FaceWithIntermediates() {
        new (&field_36) jag::math::Matrix33T<float>();
        long lVar1 = 0;
        do {
            new ((&field_72 + lVar1)) jag::math::Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
    }

    // 0x1003273a0
    FaceCollider::ModelPointers::ModelPointers(const ModelUnlitImpl& modelUnlitImpl) {
        long lVar3;

        uint64_t uVar2 = modelUnlitImpl.field_104.data();
        field_0 = uVar2;
        uVar2 = modelUnlitImpl.field_128.data();
        field_8 = uVar2;
        uVar2 = modelUnlitImpl.field_152.data();
        field_16 = uVar2;
        uVar2 = modelUnlitImpl.field_24.data();
        field_24 = uVar2;
        uVar2 = modelUnlitImpl.field_48.data();
        field_32 = uVar2;
        uVar2 = modelUnlitImpl.field_72.data();
        field_40 = uVar2;
        if ((&modelUnlitImpl.field_176)->operator_cast_to_bool() == '\0') {
            lVar3 = 0;
        } else {
            lVar3 = ((Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>*)modelUnlitImpl.field_176.operator->())
                        ->data();
        }
        field_48 = lVar3;
        field_56 = modelUnlitImpl.field_96;
        field_60 = modelUnlitImpl.field_20;
        field_64 = modelUnlitImpl.field_12;
        lVar3 = modelUnlitImpl.field_104.end();
        if (lVar3 != field_56) {
            LogAssert("model.m_point1.size() == (size_t)m_numFaces",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      107, nullptr);
        }
        lVar3 = modelUnlitImpl.field_128.end();
        if (lVar3 != field_56) {
            LogAssert("model.m_point2.size() == (size_t)m_numFaces",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      108, nullptr);
        }
        lVar3 = modelUnlitImpl.field_152.end();
        if (lVar3 != field_56) {
            LogAssert("model.m_point3.size() == (size_t)m_numFaces",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      109, nullptr);
        }
        unsigned long uVar4 = modelUnlitImpl.field_24.end();
        if (uVar4 < (unsigned long)(long)field_60) {
            LogAssert("model.m_pointX.size() >= (size_t)m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      110, nullptr);
        }
        uVar4 = modelUnlitImpl.field_48.end();
        if (uVar4 < (unsigned long)(long)field_60) {
            LogAssert("model.m_pointY.size() >= (size_t)m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      111, nullptr);
        }
        uVar4 = modelUnlitImpl.field_72.end();
        if (uVar4 < (unsigned long)(long)field_60) {
            LogAssert("model.m_pointZ.size() >= (size_t)m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      112, nullptr);
        }
    }

    // 0x100327bd0
    PoseStateProviderRSeven::~PoseStateProviderRSeven() {
        field_24->~shared_ptr();
    }

    // 0x10032b3c0
    auto PoseStateProviderRSeven::GetBoneTransforms(
        WrapArray<jag::math::Matrix43T<float>>&, eastl::vector_map<unsigned short, unsigned short> const&,
        eastl::vector_map<unsigned short, unsigned short> const&,
        jag::math::Matrix44T<float> const&) const ::$_3::operator()(unsigned long arg1) const {
        auto result;

        uint64_t* puVar1 = (uint64_t*)(*((shared_ptr<PoseStateRSeven>*)(*(long*)this + 24))).operator->();
        (**(void (**)(...))*puVar1)(&result, puVar1, arg1);
        return result;
    }

    // 0x10032bd70
    auto PoseStateProviderRSeven::GetBoneTransforms(
        WrapArray<jag::math::Matrix43T<float>>&, eastl::vector_map<unsigned short, unsigned short> const&,
        eastl::vector_map<unsigned short, unsigned short> const&,
        jag::math::Matrix44T<float> const&) const ::$_4::operator()(unsigned long arg1) const {
        auto result;

        long* plVar1 = (long*)(*((shared_ptr<PoseStateRSeven>*)(*(long*)this + 24))).operator->();
        (**(void (**)(...))(*plVar1 + 8))(&result, plVar1, arg1);
        return result;
    }

    // 0x10032efa0
    ShareLightRequest::ShareLightRequest(ShareLightRequest&& shareLightRequest) {
        shared_ptr<FileRSevenDebugPresetProvider, void>(shareLightRequest);
        uint64_t uVar1 = *(uint64_t*)&shareLightRequest.field_16;
        field_21 = shareLightRequest.field_21;
        *(uint64_t*)&field_16 = uVar1;
    }

    // 0x10032f020
    ShareLightCache::ShareLightCache(const OperationBuffer& operationBuffer) : OperationBuffer(operationBuffer) {

        new (&field_16) shared_ptr();
        allocator local_38(nullptr);
        new (&field_32) eastl::hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>>(local_38);
        new (&field_88) eastl::vector<ShareLightPointRSeven>();
        new (&field_120) eastl::vector<unsigned int>();
        field_152 = 0;
    }

    // 0x10032f320
    ShareLightCache::~ShareLightCache() {
        field_120.~vector();
        field_88.~vector();
        field_32.~hash_map();
        field_16.~shared_ptr();
    }

} // namespace jag::oldscape::dash3d

// 0x100327300
void sin(float arg1) {
    _sinf();
}

// 0x100327310
void cos(float arg1) {
    _cosf();
}

// 0x100327320
void tan(float arg1) {
    _tanf();
}

namespace jag::math {
    // 0x1003298f0
    Matrix43T<float>::Matrix43T(const Matrix33T<float>& matrix33, const Vector3T<float>& vector3) {
        long lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        SetXYZ(matrix33);
        ((this + 12))->SetXYZ(*((matrix33 + 12)));
        ((this + 24))->SetXYZ(*((matrix33 + 24)));
        ((this + 36))->SetXYZ(vector3);
    }

    // 0x10032dc50
    Vector3T<signed char>::Vector3T() {
        *(uint16_t*)this = 0;
        this[2] = (Vector3T<unsigned char>)0;
    }

} // namespace jag::math

namespace jag::oldscape::graphics {
    // 0x1003275a0
    XPlotParams::XPlotParams(unsigned int* arg1, unsigned int arg2, int arg3, const unsigned int* arg4,
                             unsigned int arg5, int arg6, int arg7, int arg8, int arg9, SpriteFlip spriteFlip)
        : field_24(arg1), field_32(arg2), field_36(arg3), field_40(arg4), field_48(arg5) {
        uint32_t uVar2;
        uint32_t uVar3;

        int iVar1 = arg6;
        int iVar4 = arg7;
        if (spriteFlip == 3) {
            uVar3 = 4294967295;
            uVar2 = 4294967295;
            arg6 = arg8;
        } else {
            uVar2 = 1;
            if (spriteFlip == 2) {
                uVar3 = 4294967295;
                arg6 = arg8;
            } else {
                iVar1 = arg8;
                if (spriteFlip == 1) {
                    uVar2 = 4294967295;
                    uVar3 = 1;
                    goto LAB_10032761f;
                }
                uVar3 = 1;
            }
            iVar4 = arg9;
            arg9 = arg7;
        }
    LAB_10032761f:
        field_0 = arg6;
        field_4 = iVar1;
        field_8 = uVar3;
        field_12 = arg9;
        field_16 = iVar4;
        field_20 = uVar2;
    }

} // namespace jag::oldscape::graphics
