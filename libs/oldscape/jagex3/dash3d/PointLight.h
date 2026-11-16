// libs/oldscape/jagex3/dash3d/PointLight.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x100327150, 208 bytes, inline, placed by debug map only (low confidence)
    // shared_ptr_if_not_array<graphics::PointLight>::type make_shared<graphics::PointLight, math::Vector3T<float> const&, float, math::Vector4T<float>, float, float, bool>(math::Vector3T<float> const&, float&&, math::Vector4T<float>&&, float&&, float&&, bool&&)
    jag* jag::make_shared<graphics::PointLight, math::Vector3T<float> const&, float, math::Vector4T<float>, float,
                          float, bool>(Vector3T* param_1, float* param_2, Vector4T* param_3, float* param_4,
                                       float* param_5, bool* param_6) {
        void* pvVar1;
        ref_counter_shared_trivial* prVar2;
        int local_44;
        PointLight* local_40[2];

        pvVar1 = (void*)aligned_alloc(64, 16);
        if (pvVar1 == (void*)0) {
            new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(16);
        } else {
            local_40[0] = placement_new<graphics::PointLight, math::Vector3T<float> const&, float,
                                        math::Vector4T<float>, float, float, bool>(
                (void*)((long)pvVar1 + 16), param_1, param_2, param_3, param_4, param_5, param_6);
            local_44 = 1;
            prVar2 = placement_new<ref_counter_shared_trivial<graphics::PointLight>, int, graphics::PointLight*&>(
                pvVar1, &local_44, local_40);
            prVar2->~AutoSingleton(local_40[0]);
            prVar2->~AutoSingleton(local_40[0]);
            new (this)
                eastl::hashtable_iterator<eastl::pair<int const, unsigned int>, false, false>(prVar2, local_40[0]);
        }
        return this;
    }

    // 0x100327220, 64 bytes, inline, placed by debug map only (low confidence)
    // graphics::PointLight* placement_new<graphics::PointLight, math::Vector3T<float> const&, float, math::Vector4T<float>, float, float, bool>(void*, math::Vector3T<float> const&, float&&, math::Vector4T<float>&&, float&&, float&&, bool&&)
    PointLight* jag::placement_new<graphics::PointLight, math::Vector3T<float> const&, float, math::Vector4T<float>,
                                   float, float, bool>(void* param_1, Vector3T* param_2, float* param_3,
                                                       Vector4T* param_4, float* param_5, float* param_6,
                                                       bool* param_7) {
        graphics::PointLight::PointLight(param_1, param_2, *param_3, param_4, *param_5, *param_6, *param_7);
        return param_1;
    }

    // 0x100327260, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<graphics::PointLight>* placement_new<ref_counter_shared_trivial<graphics::PointLight>, int, graphics::PointLight*&>(void*, int&&, graphics::PointLight*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<graphics::PointLight>, int, graphics::PointLight*&>(
        void* param_1, int* param_2, PointLight** param_3) {
        ref_counter_shared_trivial<graphics::PointLight>::ref_counter_shared_trivial(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x1003272c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<graphics::PointLight>::ref_counter_shared_trivial(unsigned long, graphics::PointLight*): jumps straight to the base-object constructor

    // 0x1003272d0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<graphics::PointLight>::ref_counter_shared_trivial(unsigned long, graphics::PointLight*)
    void ref_counter_shared_trivial<graphics::PointLight>::ref_counter_shared_trivial(ulong param_1,
                                                                                      PointLight* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7c60 + 16;
    }

    // 0x10032c230, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::Square* placement_new<oldscape::dash3d::Square, int&, int&, int&>(void*, int&, int&, int&)
    Square* placement_new<oldscape::dash3d::Square, int&, int&, int&>(void* param_1, int* param_2, int* param_3,
                                                                      int* param_4) {
        oldscape::dash3d::Square::Square(param_1, *param_2, *param_3, *param_4);
        return param_1;
    }

    // 0x10032c250, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Square>* placement_new<ref_counter_shared<oldscape::dash3d::Square>, int, oldscape::dash3d::Square*&>(void*, int&&, oldscape::dash3d::Square*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::Square>, int, oldscape::dash3d::Square*&>(
        void* param_1, int* param_2, Square** param_3) {
        ref_counter_shared<oldscape::dash3d::Square>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10032c270, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Square>::ref_counter_shared(unsigned long, oldscape::dash3d::Square*): jumps straight to the base-object constructor

    // 0x10032c280, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Square>::ref_counter_shared(unsigned long, oldscape::dash3d::Square*)
    void ref_counter_shared<oldscape::dash3d::Square>::ref_counter_shared(ulong param_1, Square* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77e0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Square**)(this + 24) = param_2;
    }

    // 0x10032c2c0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Square>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::Square>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Square();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 408;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10032c500, 80 bytes, inline, placed by debug map only (low confidence)
    // RenderState::ModelSubmissionRSeven* placement_new<RenderState::ModelSubmissionRSeven>(void*)
    ModelSubmissionRSeven* placement_new<RenderState::ModelSubmissionRSeven>(void* param_1) {
        *(undefined8*)((long)param_1 + 160) = 0;
        *(undefined8*)((long)param_1 + 168) = 0;
        *(undefined8*)((long)param_1 + 144) = 0;
        *(undefined8*)((long)param_1 + 152) = 0;
        *(undefined8*)((long)param_1 + 128) = 0;
        *(undefined8*)((long)param_1 + 136) = 0;
        *(undefined8*)((long)param_1 + 112) = 0;
        *(undefined8*)((long)param_1 + 120) = 0;
        *(undefined8*)((long)param_1 + 96) = 0;
        *(undefined8*)((long)param_1 + 104) = 0;
        *(undefined8*)((long)param_1 + 80) = 0;
        *(undefined8*)((long)param_1 + 88) = 0;
        *(undefined8*)((long)param_1 + 64) = 0;
        *(undefined8*)((long)param_1 + 72) = 0;
        *(undefined8*)((long)param_1 + 48) = 0;
        *(undefined8*)((long)param_1 + 56) = 0;
        *(undefined8*)((long)param_1 + 32) = 0;
        *(undefined8*)((long)param_1 + 40) = 0;
        *(undefined8*)((long)param_1 + 16) = 0;
        *(undefined8*)((long)param_1 + 24) = 0;
        *(undefined8*)param_1 = 0;
        *(undefined8*)((long)param_1 + 8) = 0;
        RenderState::ModelSubmissionRSeven::ModelSubmissionRSeven(param_1);
        return param_1;
    }

    // 0x10032c550, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<RenderState::ModelSubmissionRSeven>* placement_new<ref_counter_shared<RenderState::ModelSubmissionRSeven>, int, RenderState::ModelSubmissionRSeven*&>(void*, int&&, RenderState::ModelSubmissionRSeven*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<RenderState::ModelSubmissionRSeven>, int,
                                           RenderState::ModelSubmissionRSeven*&>(void* param_1, int* param_2,
                                                                                 ModelSubmissionRSeven** param_3) {
        ref_counter_shared<RenderState::ModelSubmissionRSeven>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10032c5c0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<RenderState::ModelSubmissionRSeven>::ref_counter_shared(unsigned long, RenderState::ModelSubmissionRSeven*): jumps straight to the base-object constructor

    // 0x10032c5d0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<RenderState::ModelSubmissionRSeven>::ref_counter_shared(unsigned long, RenderState::ModelSubmissionRSeven*)
    void ref_counter_shared<RenderState::ModelSubmissionRSeven>::ref_counter_shared(ulong param_1,
                                                                                    ModelSubmissionRSeven* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7208 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ModelSubmissionRSeven**)(this + 24) = param_2;
    }

    // 0x10032c610, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<RenderState::ModelSubmissionRSeven>::DeleteData()
    void ref_counter_shared<RenderState::ModelSubmissionRSeven>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ModelSubmissionRSeven();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 176;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10032efd0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ShareLightCache* placement_new<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer const&>(void*, oldscape::dash3d::OperationBuffer const&)
    ShareLightCache* jag::placement_new<oldscape::dash3d::ShareLightCache, oldscape::dash3d::OperationBuffer_const&>(
        void* param_1, OperationBuffer* param_2) {
        oldscape::dash3d::ShareLightCache::ShareLightCache(param_1, param_2);
        return param_1;
    }

    // 0x10032eff0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightCache>* placement_new<ref_counter_shared<oldscape::dash3d::ShareLightCache>, int, oldscape::dash3d::ShareLightCache*&>(void*, int&&, oldscape::dash3d::ShareLightCache*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::ShareLightCache>, int, oldscape::dash3d::ShareLightCache*&>(
        void* param_1, int* param_2, ShareLightCache** param_3) {
        ref_counter_shared<oldscape::dash3d::ShareLightCache>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10032f270, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightCache>::ref_counter_shared(unsigned long, oldscape::dash3d::ShareLightCache*): jumps straight to the base-object constructor

    // 0x10032f280, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightCache>::ref_counter_shared(unsigned long, oldscape::dash3d::ShareLightCache*)
    void ref_counter_shared<oldscape::dash3d::ShareLightCache>::ref_counter_shared(ulong param_1,
                                                                                   ShareLightCache* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7750 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ShareLightCache**)(this + 24) = param_2;
    }

    // 0x10032f2c0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightCache>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::ShareLightCache>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ShareLightCache();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 160;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10032f3e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ShareLightOperation* placement_new<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&, eastl::vector<oldscape::dash3d::ShareLightRequest, eastl::allocator>&>(void*, shared_ptr<oldscape::dash3d::ShareLightCache>&, eastl::vector<oldscape::dash3d::ShareLightRequest, eastl::allocator>&)
    ShareLightOperation*
    jag::placement_new<oldscape::dash3d::ShareLightOperation, shared_ptr<oldscape::dash3d::ShareLightCache>&,
                       eastl::vector<oldscape::dash3d::ShareLightRequest, eastl::allocator>&>(void* param_1,
                                                                                              shared_ptr* param_2,
                                                                                              vector* param_3) {
        oldscape::dash3d::ShareLightOperation::ShareLightOperation(param_1, param_2, param_3);
        return param_1;
    }

    // 0x10032f400, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightOperation>* placement_new<ref_counter_shared<oldscape::dash3d::ShareLightOperation>, int, oldscape::dash3d::ShareLightOperation*&>(void*, int&&, oldscape::dash3d::ShareLightOperation*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::dash3d::ShareLightOperation>, int,
                                           oldscape::dash3d::ShareLightOperation*&>(void* param_1, int* param_2,
                                                                                    ShareLightOperation** param_3) {
        ref_counter_shared<oldscape::dash3d::ShareLightOperation>::ref_counter_shared(param_1, (long)*param_2,
                                                                                      *param_3);
        return param_1;
    }

    // 0x10032f4d0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::ShareLightOperation*): jumps straight to the base-object constructor

    // 0x10032f4e0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightOperation>::ref_counter_shared(unsigned long, oldscape::dash3d::ShareLightOperation*)
    void ref_counter_shared<oldscape::dash3d::ShareLightOperation>::ref_counter_shared(ulong param_1,
                                                                                       ShareLightOperation* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7790 + 16;
        *(ulong*)(this + 16) = param_1;
        *(ShareLightOperation**)(this + 24) = param_2;
    }

    // 0x10032f520, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::ShareLightOperation>::DeleteData()
    void ref_counter_shared<oldscape::dash3d::ShareLightOperation>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~ShareLightOperation();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 64;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10032f5e0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::graphics::animation::OldscapeJoint* placement_new<oldscape::graphics::animation::OldscapeJoint, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, bool const&>(void*, int&, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, bool const&)
    OldscapeJoint* jag::placement_new<oldscape::graphics::animation::OldscapeJoint, int&,
                                      oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&, bool const&>(
        void* param_1, int* param_2, PacketJ* param_3, bool* param_4) {
        oldscape::graphics::animation::OldscapeJoint::OldscapeJoint(param_1, *param_2, param_3, *param_4);
        return param_1;
    }

    // 0x10032f600, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>* placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>, int, oldscape::graphics::animation::OldscapeJoint*&>(void*, int&&, oldscape::graphics::animation::OldscapeJoint*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>, int,
                                           oldscape::graphics::animation::OldscapeJoint*&>(void* param_1, int* param_2,
                                                                                           OldscapeJoint** param_3) {
        ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::ref_counter_shared(param_1, (long)*param_2,
                                                                                             *param_3);
        return param_1;
    }

    // 0x10032f620, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeJoint*): jumps straight to the base-object constructor

    // 0x10032f630, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::ref_counter_shared(unsigned long, oldscape::graphics::animation::OldscapeJoint*)
    void ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::ref_counter_shared(ulong param_1,
                                                                                              OldscapeJoint* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7950 + 16;
        *(ulong*)(this + 16) = param_1;
        *(OldscapeJoint**)(this + 24) = param_2;
    }

    // 0x10032f670, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::DeleteData()
    void ref_counter_shared<oldscape::graphics::animation::OldscapeJoint>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~OldscapeJoint();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 448;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003309d0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::Texture* placement_new<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&>(void*, oldscape::PacketJ<Array<unsigned char, eastl::allocator> >&, ErrorCapture&)
    Texture* jag::placement_new<oldscape::dash3d::Texture, oldscape::PacketJ<Array<unsigned char, eastl::allocator>>&,
                                ErrorCapture&>(void* param_1, PacketJ* param_2, ErrorCapture* param_3) {
        oldscape::dash3d::Texture::Texture(param_1, param_2, param_3);
        return param_1;
    }

    // 0x1003309f0, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Texture>* placement_new<ref_counter_shared<oldscape::dash3d::Texture>, int, oldscape::dash3d::Texture*&>(void*, int&&, oldscape::dash3d::Texture*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<oldscape::dash3d::Texture>, int, oldscape::dash3d::Texture*&>(
        void* param_1, int* param_2, Texture** param_3) {
        ref_counter_shared<oldscape::dash3d::Texture>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100330a10, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Texture>::ref_counter_shared(unsigned long, oldscape::dash3d::Texture*): jumps straight to the base-object constructor

    // 0x100330a20, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Texture>::ref_counter_shared(unsigned long, oldscape::dash3d::Texture*)
    void ref_counter_shared<oldscape::dash3d::Texture>::ref_counter_shared(ulong param_1, Texture* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee77e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Texture**)(this + 24) = param_2;
    }

    // 0x100330a60, 96 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<oldscape::dash3d::Texture>::DeleteData()
    /* ref_counter_shared<game::Entity>::DeleteData() */

    void ref_counter_shared<game::Entity>::DeleteData() {
        long lVar1;
        ulong uVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar1 = 0;
                uVar2 = 0;
                do {
                    (*(code*)**(undefined8**)(*(long*)(this + 24) + lVar1))(*(long*)(this + 24) + lVar1);
                    uVar2 = uVar2 + 1;
                    lVar1 = lVar1 + 192;
                } while (uVar2 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x100331650, 32 bytes, inline, placed by debug map only (low confidence)
    // graphics::GeometryBatch* placement_new<graphics::GeometryBatch>(void*)
    GeometryBatch* placement_new<graphics::GeometryBatch>(void* param_1) {
        graphics::GeometryBatch::GeometryBatch(param_1);
        return param_1;
    }

    // 0x100331670, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryBatch>* placement_new<ref_counter_shared<graphics::GeometryBatch>, int, graphics::GeometryBatch*&>(void*, int&&, graphics::GeometryBatch*&)
    ref_counter_shared* jag::placement_new<ref_counter_shared<graphics::GeometryBatch>, int, graphics::GeometryBatch*&>(
        void* param_1, int* param_2, GeometryBatch** param_3) {
        ref_counter_shared<graphics::GeometryBatch>::ref_counter_shared(param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x100331690, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryBatch>::ref_counter_shared(unsigned long, graphics::GeometryBatch*): jumps straight to the base-object constructor

    // 0x1003316a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryBatch>::ref_counter_shared(unsigned long, graphics::GeometryBatch*)
    void ref_counter_shared<graphics::GeometryBatch>::ref_counter_shared(ulong param_1, GeometryBatch* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7528 + 16;
        *(ulong*)(this + 16) = param_1;
        *(GeometryBatch**)(this + 24) = param_2;
    }

    // 0x1003316e0, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<graphics::GeometryBatch>::DeleteData()
    void ref_counter_shared<graphics::GeometryBatch>::DeleteData() {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~GeometryBatch();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 2208;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x1003318c0, 32 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelRSevenUnlit* placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(void*, shared_ptr<graphics::Model>&&, bool&&)
    ModelRSevenUnlit* jag::placement_new<oldscape::dash3d::ModelRSevenUnlit, shared_ptr<graphics::Model>, bool>(
        void* param_1, shared_ptr* param_2, bool* param_3) {
        oldscape::dash3d::ModelRSevenUnlit::ModelRSevenUnlit(param_1, param_2, *param_3);
        return param_1;
    }

    // 0x100332ec0, 80 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::QuickGround* placement_new<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int, int&, bool, bool>(void*, int&, int&, int&, int&, int&&, int&, bool&&, bool&&)
    /* oldscape::dash3d::QuickGround* placement_new<oldscape::dash3d::QuickGround, int&,
   int&, int&, int&, int&, int&, bool, bool>(void*, int&, int&, int&, int&, int&, int&, bool&&,
   bool&&) */

    QuickGround* placement_new<oldscape::dash3d::QuickGround, int&, int&, int&, int&, int&, int&, bool, bool>(
        void* param_1, int* param_2, int* param_3, int* param_4, int* param_5, int* param_6, int* param_7,
        bool* param_8, bool* param_9) {
        oldscape::dash3d::QuickGround::QuickGround(param_1, *param_2, *param_3, *param_4, *param_5, *param_6, *param_7,
                                                   *param_8, *param_9);
        return param_1;
    }

    // 0x100332f10, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::QuickGround>* placement_new<ref_counter_shared_trivial<oldscape::dash3d::QuickGround>, int, oldscape::dash3d::QuickGround*&>(void*, int&&, oldscape::dash3d::QuickGround*&)
    ref_counter_shared_trivial*
    jag::placement_new<ref_counter_shared_trivial<oldscape::dash3d::QuickGround>, int, oldscape::dash3d::QuickGround*&>(
        void* param_1, int* param_2, QuickGround** param_3) {
        ref_counter_shared_trivial<oldscape::dash3d::QuickGround>::ref_counter_shared_trivial(param_1, (long)*param_2,
                                                                                              *param_3);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class PointLightSource {
    public:
        // virtual methods in vtable order
        virtual void __pure_slot_0() = 0;
        virtual GetUniqueID(unsigned long long&) const;
        PointLightSource();

        // data members, from how the methods use this: 8 bytes
        undefined* field_0; // offset 0, vtable pointer
    };

    class ShareLightRequest {
    public:
        ~ShareLightRequest();
        ShareLightRequest(ShareLightRequest&&);
        ShareLightRequest(ShareLightRequest const&);

        // data members, from how the methods use this: 29 bytes
        char _unknown_0[21];
        undefined8 field_21; // offset 21
    };

    // 0x1003270b0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // PointLightSource::PointLightSource()
    void PointLightSource::PointLightSource() {
        field_0 = PTR_vtable_100ee89c0 + 16;
    }

    // 0x100327360, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FaceCollider::FaceWithIntermediates::FaceWithIntermediates()
    void FaceCollider::FaceWithIntermediates::FaceWithIntermediates() {
        long lVar1;

        new (&field_36) jag::math::Matrix33T<float>();
        lVar1 = 0;
        do {
            new ((&field_72 + lVar1)) jag::math::Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 36);
    }

    // 0x1003273a0, 512 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // FaceCollider::ModelPointers::ModelPointers(ModelUnlitImpl const&)
    void FaceCollider::ModelPointers::ModelPointers(ModelUnlitImpl* param_1) {
        bool bVar1;
        undefined8 uVar2;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer, std::default_delete<LoadingScreenScript::AnimLayer>>,
              eastl::allocator>* this_00;
        long lVar3;
        ulong uVar4;

        uVar2 = (&param_1->field_104)->data();
        field_0 = uVar2;
        uVar2 = (&param_1->field_128)->data();
        field_8 = uVar2;
        uVar2 = (&param_1->field_152)->data();
        field_16 = uVar2;
        uVar2 = (&param_1->field_24)->data();
        field_24 = uVar2;
        uVar2 = (&param_1->field_48)->data();
        field_32 = uVar2;
        uVar2 = (&param_1->field_72)->data();
        field_40 = uVar2;
        bVar1 = param_1->field_176->operator_cast_to_bool();
        if (bVar1) {
            this_00 = (Array<std::unique_ptr<LoadingScreenScript::AnimLayer,
                                             std::default_delete<LoadingScreenScript::AnimLayer>>,
                             eastl::allocator>*)
                          shared_ptr<Array<signed char, eastl::allocator>>::operator->(
                              (shared_ptr<Array<signed char, eastl::allocator>>*)param_1->field_176);
            lVar3 = this_00->data();
        } else {
            lVar3 = 0;
        }
        field_48 = lVar3;
        field_56 = param_1->field_96;
        field_60 = param_1->field_20;
        field_64 = param_1->field_12;
        lVar3 = (&param_1->field_104)->end();
        if (lVar3 != field_56) {
            /* WARNING: Subroutine does not return */
            LogAssert("model.m_point1.size() == (size_t)m_numFaces",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      107, (char*)0);
        }
        lVar3 = (&param_1->field_128)->end();
        if (lVar3 != field_56) {
            /* WARNING: Subroutine does not return */
            LogAssert("model.m_point2.size() == (size_t)m_numFaces",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      108, (char*)0);
        }
        lVar3 = (&param_1->field_152)->end();
        if (lVar3 != field_56) {
            /* WARNING: Subroutine does not return */
            LogAssert("model.m_point3.size() == (size_t)m_numFaces",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      109, (char*)0);
        }
        uVar4 = (&param_1->field_24)->end();
        if (uVar4 < (ulong)(long)field_60) {
            /* WARNING: Subroutine does not return */
            LogAssert("model.m_pointX.size() >= (size_t)m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      110, (char*)0);
        }
        uVar4 = (&param_1->field_48)->end();
        if (uVar4 < (ulong)(long)field_60) {
            /* WARNING: Subroutine does not return */
            LogAssert("model.m_pointY.size() >= (size_t)m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      111, (char*)0);
        }
        uVar4 = (&param_1->field_72)->end();
        if (uVar4 < (ulong)(long)field_60) {
            /* WARNING: Subroutine does not return */
            LogAssert("model.m_pointZ.size() >= (size_t)m_numPoints",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/dash3d/"
                      "ZFightDetection.cpp",
                      112, (char*)0);
        }
    }

    // 0x100327bd0, 48 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::~PoseStateProviderRSeven()
    void PoseStateProviderRSeven::~PoseStateProviderRSeven() {
        field_0 = &PTR__PoseStateProviderRSeven_100efb000;
        field_24->~shared_ptr();
        ~AnimationStateProvider();
    }

    // 0x10032b3c0, 48 bytes, inline, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, jag::math::Matrix44T<float> const&) const::$_3::operator()(unsigned long) const
    /* PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float>
   >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
   eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> >
   const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
   eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> >
   const&, jag::math::Matrix44T<float> const&) const::$_3::TEMPNAMEPLACEHOLDERVALUE(unsigned long)
   const */

    _func_GetBoneTransforms_WrapArray_ptr_vector_map_ptr_vector_map_ptr_Matrix44T_ptr* const ::$_3::operator()(
        ulong param_1) {
        undefined8* puVar1;

        puVar1 =
            (undefined8*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(*(long*)param_1 + 24));
        (**(code**)*puVar1)(this, puVar1);
        return (_func_GetBoneTransforms_WrapArray_ptr_vector_map_ptr_vector_map_ptr_Matrix44T_ptr*)this;
    }

    // 0x10032bd70, 48 bytes, inline, placed by debug map only (low confidence)
    // PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float> >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>, eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> > const&, jag::math::Matrix44T<float> const&) const::$_4::operator()(unsigned long) const
    /* PoseStateProviderRSeven::GetBoneTransforms(WrapArray<jag::math::Matrix43T<float>
   >&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
   eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> >
   const&, eastl::vector_map<unsigned short, unsigned short, eastl::less<unsigned short>,
   eastl::allocator, eastl::vector<eastl::pair<unsigned short, unsigned short>, eastl::allocator> >
   const&, jag::math::Matrix44T<float> const&) const::$_4::TEMPNAMEPLACEHOLDERVALUE(unsigned long)
   const */

    _func_GetBoneTransforms_WrapArray_ptr_vector_map_ptr_vector_map_ptr_Matrix44T_ptr* const ::$_4::operator()(
        ulong param_1) {
        long* plVar1;

        plVar1 = (long*)shared_ptr<PoseStateRSeven>::operator->((shared_ptr<PoseStateRSeven>*)(*(long*)param_1 + 24));
        (**(code**)(*plVar1 + 8))(this, plVar1);
        return (_func_GetBoneTransforms_WrapArray_ptr_vector_map_ptr_vector_map_ptr_Matrix44T_ptr*)this;
    }

    // 0x10032ef90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShareLightRequest::ShareLightRequest(ShareLightRequest&&): jumps straight to the base-object constructor

    // 0x10032efa0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShareLightRequest::ShareLightRequest(ShareLightRequest&&)
    void ShareLightRequest::ShareLightRequest(ShareLightRequest* param_1) {
        undefined8 uVar1;

        shared_ptr<RSevenDebugPresetProvider>::shared_ptr<FileRSevenDebugPresetProvider, void>(
            (shared_ptr<RSevenDebugPresetProvider>*)this, (shared_ptr*)param_1);
        uVar1 = *(undefined8*)&param_1->field_16;
        field_21 = param_1->field_21;
        *(undefined8*)&field_16 = uVar1;
    }

    // 0x10032f010, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ShareLightCache::ShareLightCache(OperationBuffer const&): jumps straight to the base-object constructor

    // 0x10032f020, 176 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ShareLightCache::ShareLightCache(OperationBuffer const&)
    void ShareLightCache::ShareLightCache(OperationBuffer* param_1) {
        allocator local_38[8];

        new (this) OperationBuffer(param_1);
        new (&field_16, (_func_decltype_nullptr*)param_1) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        eastl::allocator::allocator(local_38, (char*)0);
        new (&field_32, local_38)
            eastl::hash_map<jag::math::Vector3T<int>, jag::math::Vector4T<int>, eastl::hash<jag::math::Vector3T<int>>,
                            eastl::equal_to<jag::math::Vector3T<int>>, eastl::allocator, false>();
        new (&field_88) eastl::vector<ShareLightPointRSeven, eastl::allocator>();
        new (&field_120) eastl::vector<unsigned int, eastl::allocator>();
        field_152 = 0;
    }

    // 0x10032f310, 16 bytes, complete-object destructor, inline, placed by debug map only (low confidence)
    // ShareLightCache::~ShareLightCache(): jumps straight to the base-object destructor

    // 0x10032f320, 64 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // ShareLightCache::~ShareLightCache()
    void ShareLightCache::~ShareLightCache() {
        (&field_120)->~vector();
        (&field_88)->~vector();
        (&field_32)->~hash_map();
        (&field_16)->~shared_ptr();
        ~LRUHashCacheWrapper();
    }

} // namespace jag::oldscape::dash3d

// 0x100327300, 16 bytes, placed by debug map only (low confidence)
// sin(float)
void sin(float param_1) {
    _sinf();
}

// 0x100327310, 16 bytes, placed by debug map only (low confidence)
// cos(float)
void cos(float param_1) {
    _cosf();
}

// 0x100327320, 16 bytes, placed by debug map only (low confidence)
// tan(float)
void tan(float param_1) {
    _tanf();
}

namespace jag::math {
    // 0x1003298f0, 128 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Matrix43T<float>::Matrix43T(Matrix33T<float> const&, Vector3T<float> const&)
    void Matrix43T<float>::Matrix43T(Matrix33T* param_1, Vector3T* param_2) {
        long lVar1;

        lVar1 = 0;
        do {
            new ((this + lVar1)) Vector3T<int>();
            lVar1 = lVar1 + 12;
        } while (lVar1 != 48);
        SetXYZ(param_1);
        ((this + 12))->SetXYZ((Vector3T*)(param_1 + 12));
        ((this + 24))->SetXYZ((Vector3T*)(param_1 + 24));
        ((this + 36))->SetXYZ(param_2);
    }

    // 0x10032dc50, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector3T<signed char>::Vector3T()
    /* Vector3T<unsigned char>::Vector3T() */

    void Vector3T<unsigned char>::Vector3T() {
        *(undefined2*)this = 0;
        this[2] = (Vector3T<unsigned char>)0;
    }

} // namespace jag::math

namespace jag::oldscape::graphics {
    // 0x1003275a0, 160 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // XPlotParams::XPlotParams(unsigned int*, unsigned int, int, unsigned int const*, unsigned int, int, int, int, int, SpriteFlip)
    void XPlotParams::XPlotParams(undefined8 param_1, undefined4 param_2, undefined4 param_3, undefined8 param_4,
                                  undefined4 param_5, undefined4 param_6, undefined4 param_7, undefined4 param_8,
                                  undefined4 param_9, int param_11) {
        undefined4 uVar1;
        undefined4 uVar2;
        undefined4 uVar3;
        undefined4 uVar4;

        field_24 = param_1;
        field_32 = param_2;
        field_36 = param_3;
        field_40 = param_4;
        field_48 = param_5;
        uVar1 = param_6;
        uVar4 = param_7;
        if (param_11 == 3) {
            uVar3 = 4294967295;
            uVar2 = 4294967295;
            param_6 = param_8;
        } else {
            uVar2 = 1;
            if (param_11 == 2) {
                uVar3 = 4294967295;
                param_6 = param_8;
            } else {
                uVar1 = param_8;
                if (param_11 == 1) {
                    uVar2 = 4294967295;
                    uVar3 = 1;
                    goto LAB_10032761f;
                }
                uVar3 = 1;
            }
            uVar4 = param_9;
            param_9 = param_7;
        }
    LAB_10032761f:
        field_0 = param_6;
        field_4 = uVar1;
        field_8 = uVar3;
        field_12 = param_9;
        field_16 = uVar4;
        field_20 = uVar2;
    }

} // namespace jag::oldscape::graphics
