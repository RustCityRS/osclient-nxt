// libs/oldscape/jagex3/dash3d/LightSource.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once
// target: libs.oldscape.jagex3

namespace jag {
    // 0x10037cfa0
    ref_counter_shared_trivial<oldscape::dash3d::LightSource>::ref_counter_shared_trivial(
        unsigned long arg1, oldscape::dash3d::LightSource* lightSource)
        : ref_counter_base() {}

    // 0x10037d150
    oldscape::dash3d::ModelUnlitImpl* placement_new<oldscape::dash3d::ModelUnlitImpl>(void* arg1) {
        ___bzero(arg1, 600);
        new (arg1) oldscape::dash3d::ModelUnlitImpl();
        return arg1;
    }

    // 0x10037ea00
    Array<oldscape::dash3d::PointNormal>* placement_new<Array<oldscape::dash3d::PointNormal>, int&>(void* arg1,
                                                                                                    int& arg2) {
        new (arg1) Array<oldscape::dash3d::PointNormal>((long)*arg2);
        return arg1;
    }

    // 0x10037ea20
    ref_counter_shared<Array<oldscape::dash3d::PointNormal>>*
    placement_new<ref_counter_shared<Array<oldscape::dash3d::PointNormal>>, int,
                  Array<oldscape::dash3d::PointNormal>*&>(void* arg1, int&& arg2,
                                                          Array<oldscape::dash3d::PointNormal>*& arg3) {
        new (arg1) ref_counter_shared<Array<oldscape::dash3d::PointNormal>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037ec50
    ref_counter_shared<Array<oldscape::dash3d::PointNormal>>::ref_counter_shared(
        unsigned long arg1, Array<oldscape::dash3d::PointNormal>* pointNormals)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee73f0 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<oldscape::dash3d::PointNormal>**)(this + 24) = pointNormals;
    }

    // 0x10037ec90
    void ref_counter_shared<Array<oldscape::dash3d::PointNormal>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<oldscape::dash3d::PointNormal>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10037ed00
    Array<oldscape::dash3d::FaceNormal>* placement_new<Array<oldscape::dash3d::FaceNormal>, int&>(void* arg1,
                                                                                                  int& arg2) {
        new (arg1) Array<oldscape::dash3d::FaceNormal>((long)*arg2);
        return arg1;
    }

    // 0x10037ed20
    ref_counter_shared<Array<oldscape::dash3d::FaceNormal>>*
    placement_new<ref_counter_shared<Array<oldscape::dash3d::FaceNormal>>, int, Array<oldscape::dash3d::FaceNormal>*&>(
        void* arg1, int&& arg2, Array<oldscape::dash3d::FaceNormal>*& arg3) {
        new (arg1) ref_counter_shared<Array<oldscape::dash3d::FaceNormal>>((long)*arg2, arg3);
        return arg1;
    }

    // 0x10037efe0
    ref_counter_shared<Array<oldscape::dash3d::FaceNormal>>::ref_counter_shared(
        unsigned long arg1, Array<oldscape::dash3d::FaceNormal>* faceNormals)
        : ref_counter_base() {
        *(uint8_t**)this = PTR_vtable_100ee73e8 + 16;
        *(unsigned long*)(this + 16) = arg1;
        *(Array<oldscape::dash3d::FaceNormal>**)(this + 24) = faceNormals;
    }

    // 0x10037f020
    void ref_counter_shared<Array<oldscape::dash3d::FaceNormal>>::DeleteData() {
        unsigned long uVar1;
        long lVar2;

        if (*(long*)(this + 24) != 0) {
            if (*(long*)(this + 16) != 0) {
                lVar2 = 0;
                uVar1 = 0;
                do {
                    ((Array<oldscape::dash3d::FaceNormal>*)(*(long*)(this + 24) + lVar2))->~Array();
                    uVar1 = uVar1 + 1;
                    lVar2 = lVar2 + 24;
                } while (uVar1 < *(unsigned long*)(this + 16));
            }
            *(uint64_t*)(this + 24) = 0;
        }
    }

    // 0x10037f550
    Array<short>* placement_new<Array<short>, unsigned long>(void* arg1, unsigned long&& arg2) {
        new (arg1) Array<short>(arg2);
        return arg1;
    }

} // namespace jag

namespace jag::oldscape::dash3d {
    class LightSource {
    public:
        LightSource();
    };

    // 0x10037cf70
    LightSource::LightSource() {
        *(uint64_t*)this = 0;
        field_8 = 0.0;
        field_12 = 0.0;
        field_16 = 0.0;
    }

    // 0x10037d190
    ModelUnlitImpl::ModelUnlitImpl() : ModelUnlit(), field_20(0), field_96(0) {
        new (&field_176) shared_ptr();
        new (&field_192) shared_ptr();
        new (&field_208) shared_ptr();
        new (&field_224) shared_ptr();
        new (&field_240) shared_ptr();
        new (&field_256) shared_ptr();
        new (&field_272) shared_ptr();
        new (&field_288) SharedArray();
        field_312 = 0;
        new (&field_320) Array<signed char>();
        new (&field_344) Array<short>();
        new (&field_368) Array<short>();
        new (&field_392) Array<short>();
        new (&field_416) shared_ptr();
        new (&field_432) shared_ptr();
        new (&field_448) shared_ptr();
        new (&field_464) shared_ptr();
        new (&field_480) shared_ptr();
        new (&field_496) shared_ptr();
        new (&field_512) shared_ptr();
        new (&field_528) shared_ptr();
        new (&field_544) shared_ptr();
        new (&field_560) shared_ptr();
        field_576 = 0;
    }

    // 0x10037ded0
    uint8_t[16] ModelUnlitImpl::HillSkew(int, int, int, int, int)::$_3::operator()(int arg1) const {
        uint8_t auVar4[16];

        long lVar1 = field_0;
        int* piVar2 = (int*)(*((lVar1 + 24)))[(unsigned long)arg1];
        int arg1_00 = *piVar2;
        unsigned int* puVar3 = (unsigned int*)(*((lVar1 + 48)))[(unsigned long)arg1];
        unsigned int arg2 = *puVar3;
        puVar3 = (unsigned int*)(*((lVar1 + 72)))[(unsigned long)arg1];
        LocationData local_38(arg1_00, arg2, *puVar3);
        auVar4._12_4_ = 0;
        auVar4._0_4_ = local_38.field_0;
        auVar4._4_4_ = local_38.field_4;
        auVar4._8_4_ = local_38.field_8;
        return auVar4;
    }

    // 0x10037e850
    void ModelUnlitImpl::HillSkew(int, int, int, int, int)::$_4::operator()(int arg1, int arg2) const {
        int* piVar1 = (int*)(*((field_0 + 48)))[(long)arg1];
        *piVar1 = arg2;
    }

} // namespace jag::oldscape::dash3d

namespace jag::math {
    // 0x10037fc40
    void Vector2T<int>::LengthSq() const {
        Vector2Dot<int>(this, this);
    }

    // 0x10037fc50
    int Vector2Dot<int>(const Vector2T<int>& vector21, const Vector2T<int>& vector22) {
        return *(int*)(vector22 + 4) * *(int*)(vector21 + 4) + *(int*)vector22 * *(int*)vector21;
    }

    // 0x100380070
    Vector2T<float>::Vector2T(float arg1) {
        *(float*)this = arg1;
        *(float*)(this + 4) = arg1;
    }

} // namespace jag::math

namespace jag::render {
    // 0x10037cf70: DrawCallParams::DrawCallParams() has the same machine code as oldscape::dash3d::LightSource::LightSource()

    // 0x10037cf70: GPUMemoryTrackingEntry::GPUMemoryTrackingEntry() has the same machine code as oldscape::dash3d::LightSource::LightSource()

} // namespace jag::render
