// libs/oldscape/jagex3/dash3d/LightSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x10037cf90, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::LightSource>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::LightSource*): jumps straight to the base-object constructor

    // 0x10037cfa0, 48 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared_trivial<oldscape::dash3d::LightSource>::ref_counter_shared_trivial(unsigned long, oldscape::dash3d::LightSource*)
    void ref_counter_shared_trivial<oldscape::dash3d::LightSource>::ref_counter_shared_trivial(ulong param_1,
                                                                                               LightSource* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee7d00 + 16;
    }

    // 0x10037d150, 48 bytes, inline, placed by debug map only (low confidence)
    // oldscape::dash3d::ModelUnlitImpl* placement_new<oldscape::dash3d::ModelUnlitImpl>(void*)
    ModelUnlitImpl* placement_new<oldscape::dash3d::ModelUnlitImpl>(void* param_1) {
        ___bzero(param_1, 600);
        oldscape::dash3d::ModelUnlitImpl::ModelUnlitImpl(param_1);
        return param_1;
    }

    // 0x10037ea00, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<oldscape::dash3d::PointNormal, eastl::allocator>* placement_new<Array<oldscape::dash3d::PointNormal, eastl::allocator>, int&>(void*, int&)
    Array* placement_new<Array<oldscape::dash3d::PointNormal, eastl::allocator>, int&>(void* param_1, int* param_2) {
        Array<oldscape::dash3d::PointNormal, eastl::allocator>::Array(param_1, (long)*param_2);
        return param_1;
    }

    // 0x10037ea20, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator> >* placement_new<ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator> >, int, Array<oldscape::dash3d::PointNormal, eastl::allocator>*&>(void*, int&&, Array<oldscape::dash3d::PointNormal, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>>, int,
                       Array<oldscape::dash3d::PointNormal, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                 Array** param_3) {
        ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037ec40, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::dash3d::PointNormal, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10037ec50, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::dash3d::PointNormal, eastl::allocator>*)
    void ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>>* this, ulong param_1,
        Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73f0 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x10037ec90, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<oldscape::dash3d::PointNormal, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037ed00, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<oldscape::dash3d::FaceNormal, eastl::allocator>* placement_new<Array<oldscape::dash3d::FaceNormal, eastl::allocator>, int&>(void*, int&)
    Array* placement_new<Array<oldscape::dash3d::FaceNormal, eastl::allocator>, int&>(void* param_1, int* param_2) {
        Array<oldscape::dash3d::FaceNormal, eastl::allocator>::Array(param_1, (long)*param_2);
        return param_1;
    }

    // 0x10037ed20, 32 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator> >* placement_new<ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator> >, int, Array<oldscape::dash3d::FaceNormal, eastl::allocator>*&>(void*, int&&, Array<oldscape::dash3d::FaceNormal, eastl::allocator>*&)
    ref_counter_shared*
    jag::placement_new<ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>>, int,
                       Array<oldscape::dash3d::FaceNormal, eastl::allocator>*&>(void* param_1, int* param_2,
                                                                                Array** param_3) {
        ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>>::ref_counter_shared(
            param_1, (long)*param_2, *param_3);
        return param_1;
    }

    // 0x10037efd0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::dash3d::FaceNormal, eastl::allocator>*): jumps straight to the base-object constructor

    // 0x10037efe0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator> >::ref_counter_shared(unsigned long, Array<oldscape::dash3d::FaceNormal, eastl::allocator>*)
    void ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>>::ref_counter_shared(
        ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>>* this, ulong param_1,
        Array* param_2) {
        new (this) ref_counter_base();
        *(undefined**)this = PTR_vtable_100ee73e8 + 16;
        *(ulong*)(this + 16) = param_1;
        *(Array**)(this + 24) = param_2;
    }

    // 0x10037f020, 80 bytes, inline, placed by debug map only (low confidence)
    // ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator> >::DeleteData()
    void ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>>::DeleteData(
        ref_counter_shared<Array<oldscape::dash3d::FaceNormal, eastl::allocator>>* this) {
        ulong uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(ulong*)(this + 16));
            }
            *(undefined8*)(this + 24) = 0;
        }
    }

    // 0x10037f550, 32 bytes, inline, placed by debug map only (low confidence)
    // Array<short, eastl::allocator>* placement_new<Array<short, eastl::allocator>, unsigned long>(void*, unsigned long&&)
    Array* placement_new<Array<short, eastl::allocator>, unsigned long>(void* param_1, ulong* param_2) {
        Array<short, eastl::allocator>::Array(param_1, *param_2);
        return param_1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class LightSource {
    public:
        LightSource();
    };

    // 0x10037cf60, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // LightSource::LightSource(): jumps straight to the base-object constructor

    // 0x10037cf70, 32 bytes, base-object constructor, inline, placed by class name and debug map
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // LightSource::LightSource()
    /* game::EntityHighlightGlobalState::RadialHighlightState::RadialHighlightState() */

    void game::EntityHighlightGlobalState::RadialHighlightState::RadialHighlightState() {
        *(undefined8*)this = 0;
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 0.0;
    }

    // 0x10037d180, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ModelUnlitImpl::ModelUnlitImpl(): jumps straight to the base-object constructor

    // 0x10037d190, 1104 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ModelUnlitImpl::ModelUnlitImpl()
    void ModelUnlitImpl::ModelUnlitImpl() {
        _func_decltype_nullptr* in_RSI;

        new (this) ModelUnlit();
        field_0 = &PTR__ModelUnlitImpl_100efbe18;
        field_20 = 0;
        new (&field_24) Array<int, eastl::allocator>();
        new (&field_48) Array<int, eastl::allocator>();
        new (&field_72) Array<int, eastl::allocator>();
        field_96 = 0;
        new (&field_104) Array<int, eastl::allocator>();
        new (&field_128) Array<int, eastl::allocator>();
        new (&field_152) Array<int, eastl::allocator>();
        new (field_176, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_192, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_208, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_224, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_240, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_256, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_272, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_288) SharedArray<unsigned int>();
        field_312 = 0;
        new (&field_320) Array<signed char, eastl::allocator>();
        new (&field_344) Array<short, eastl::allocator>();
        new (&field_368) Array<short, eastl::allocator>();
        new (&field_392) Array<short, eastl::allocator>();
        new (field_416, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_432, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_448, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_464, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_480, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (field_496, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_512, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_528, in_RSI) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_544, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        new (&field_560, (_func_decltype_nullptr*)0) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>();
        field_576 = 0;
    }

    // 0x10037ded0, 112 bytes, placed by debug map only (low confidence)
    // ModelUnlitImpl::HillSkew(int, int, int, int, int)::$_3::operator()(int) const
    /* ModelUnlitImpl::HillSkew(int, int, int, int,
   int)::$_3::TEMPNAMEPLACEHOLDERVALUE(int) const */

    undefined1[16] ModelUnlitImpl::HillSkew(int, int, int, int, int)::$_3::operator()(int param_1) {
        int iVar1;
        int iVar2;
        long lVar3;
        int* piVar4;
        undefined1 auVar6[16];
        LocationData local_38;

        lVar3 = field_0;
        piVar4 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar3 + 24), (ulong)param_1);
        iVar1 = *piVar4;
        piVar4 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar3 + 48), (ulong)param_1);
        iVar2 = *piVar4;
        piVar4 =
            (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(lVar3 + 72), (ulong)param_1);
        new (&local_38) rs2lib::worldmap::LocationData(iVar1, iVar2, *piVar4);
        auVar6._12_4_ = 0;
        auVar6._0_4_ = local_38.field_0;
        auVar6._4_4_ = local_38.field_4;
        auVar6._8_4_ = local_38.field_8;
        return auVar6;
    }

    // 0x10037e850, 32 bytes, placed by debug map only (low confidence)
    // ModelUnlitImpl::HillSkew(int, int, int, int, int)::$_4::operator()(int, int) const
    /* ModelUnlitImpl::HillSkew(int, int, int, int,
   int)::$_4::TEMPNAMEPLACEHOLDERVALUE(int, int) const */

    void ModelUnlitImpl::HillSkew(int, int, int, int, int)::$_4::operator()(int param_1, int param_2) {
        int* piVar1;

        piVar1 = (int*)Array<int, eastl::allocator>::operator[]((Array<int, eastl::allocator>*)(field_0 + 48),
                                                                (long)param_1);
        *piVar1 = param_2;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x10037fc40, 16 bytes, inline, placed by debug map only (low confidence)
    // Vector2T<int>::LengthSq() const
    void Vector2T<int>::LengthSq() {
        Vector2Dot<int>((Vector2T*)this, (Vector2T*)this);
    }

    // 0x10037fc50, 32 bytes, inline, placed by debug map only (low confidence)
    // int Vector2Dot<int>(Vector2T<int> const&, Vector2T<int> const&)
    int Vector2Dot<int>(Vector2T* param_1, Vector2T* param_2) {
        return *(int*)(param_2 + 4) * *(int*)(param_1 + 4) + *(int*)param_2 * *(int*)param_1;
    }

    // 0x100380070, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Vector2T<float>::Vector2T(float)
    void Vector2T<float>::Vector2T(float param_1) {
        *(float*)this = param_1;
        *(float*)(this + 4) = param_1;
    }

} // namespace jag::math

namespace jag::render {
    // 0x10037cf70: the linker folded this into oldscape::dash3d::LightSource::LightSource(), which has identical code
    DrawCallParams::DrawCallParams();

    // 0x10037cf70: the linker folded this into oldscape::dash3d::LightSource::LightSource(), which has identical code
    GPUMemoryTrackingEntry::GPUMemoryTrackingEntry();

} // namespace jag::render
