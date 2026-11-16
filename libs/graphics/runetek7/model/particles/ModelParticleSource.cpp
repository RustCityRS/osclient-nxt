// libs/graphics/runetek7/model/particles/ModelParticleSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ModelParticleSource.h"

namespace jag::graphics {
    // 0x100009e70: the linker folded this into AutoSingleton<ThreadPoolSingleton>::~AutoSingleton(), which has identical code
    ModelParticleSource::~ModelParticleSource();

    // 0x10002a770: the linker folded this into void eastl::destruct<oldscape::rs2lib::CoordMapSquare*>(oldscape::rs2lib::CoordMapSquare*, oldscape::rs2lib::CoordMapSquare*), which has identical code
    ModelParticleSource::~ModelParticleSource();

    // 0x10004af40: the linker folded this into std::__function::__func<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&>, std::allocator<std::__bind<void (oldscape::Client::*)(), oldscape::Client*&> >, void (oldscape::ClientWindowMode)>::~__func(), which has identical code
    ModelParticleSource::~ModelParticleSource();

    // 0x1000b7910: the linker folded this into oldscape::minimenu::MinimenuEntry::GetSubjectName() const, which has identical code
    ModelParticleSource::GetVertex3() const;

    // 0x1000b9950: the linker folded this into oldscape::ScriptVarType::GetDefaultValue() const, which has identical code
    ModelParticleSource::GetVertex1() const;

    // 0x1000e5d50: the linker folded this into oldscape::rs2lib::CoordZoneSource::GetRotation() const, which has identical code
    ModelParticleSource::GetTemplateID() const;

    // 0x10016b4a0: the linker folded this into oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const, which has identical code
    ModelParticleSource::GetSourceModelExternalID() const;

    // 0x1003e7ff0: the linker folded this into math::SmoothRotation::GetFinalRotation() const, which has identical code
    ModelParticleSource::GetVertex2() const;

    // 0x10040f290: the linker folded this into game::ChangeLocationRequest::SetLocationID(int), which has identical code
    ModelParticleSource::SetSourceModelExternalID(int);

    // 0x100456dd0: the linker folded this into game::CoordGridSize::CoordGridSize(game::CoordGrid const&, int, int), which has identical code
    ModelParticleSource::VertexBonePos::VertexBonePos(math::Vector3T<float> const&, int, int);

    // 0x100456f20: the linker folded this into game::CoordGridSize::CoordGridSize(game::CoordGrid const&, int, int), which has identical code
    ModelParticleSource::VertexBonePos::VertexBonePos(math::Vector3T<float> const&, int, int);

    // 0x10081d4b0, 64 bytes, placed by class name and debug map
    // ModelParticleSource::Scale(math::Vector3T<float> const&)
    void ModelParticleSource::Scale(Vector3T* param_1) {
        math::Vector3T<float>::operator*=((Vector3T<float>*)&field_16, param_1);
        math::Vector3T<float>::operator*=((Vector3T<float>*)&m_vertex2, param_1);
        math::Vector3T<float>::operator*=((Vector3T<float>*)&field_56, param_1);
    }

    // 0x10081d6a0, 64 bytes, placed by class name and debug map
    // ModelParticleSource::MirrorZ()
    void ModelParticleSource::MirrorZ() {
        field_24 = field_24 ^ 2147483648;
        field_44 = field_44 ^ 2147483648;
        field_64 = field_64 ^ 2147483648;
    }

    // 0x10081d9a0, 224 bytes, placed by class name and debug map
    // ModelParticleSource::HillChange(HillChange, int, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL> const&, LocationHelpers::LocationHillChangeData const&)
    void ModelParticleSource::HillChange(undefined4 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5,
                                         undefined8 param_6) {
        float* pfVar1;
        int iVar2;

        iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, &field_16);
        pfVar1 = (float*)(&field_16)->y();
        *pfVar1 = (float)iVar2;
        if (field_8 != '\0') {
            iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, &m_vertex2);
            pfVar1 = (float*)(&m_vertex2)->y();
            *pfVar1 = (float)iVar2;
            iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, param_6, param_4, param_5, &field_56);
            pfVar1 = (float*)(&field_56)->y();
            *pfVar1 = (float)iVar2;
        }
    }

    // 0x100822050, 96 bytes, base-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource()
    void ModelParticleSource::ModelParticleSource() {
        new (this) Transformable();
        new (this) MakeSharedPool<ModelParticleSource, 768>();
        field_0 = &PTR_Transform_100f15808;
        field_8 = 0;
        field_12 = 0;
        new (&field_16) VertexBonePos();
        new (&m_vertex2) VertexBonePos();
        new (&field_56) VertexBonePos();
        m_sourceModelExternalID = 0;
    }

    // 0x100822120, 16 bytes, complete-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource(): jumps straight to the base-object constructor

    // 0x100822130, 128 bytes, base-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource(unsigned int, ModelParticleSource::VertexBonePos const&, ModelParticleSource::VertexBonePos const&, ModelParticleSource::VertexBonePos const&)
    void ModelParticleSource::ModelParticleSource(uint param_1, VertexBonePos* param_2, VertexBonePos* param_3,
                                                  VertexBonePos* param_4) {
        undefined4 uVar1;
        int iVar2;

        new (this) Transformable();
        new (this) MakeSharedPool<ModelParticleSource, 768>();
        field_0 = &PTR_Transform_100f15808;
        field_8 = 1;
        field_12 = param_1;
        field_32 = param_2->field_16;
        uVar1 = param_2->field_8;
        iVar2 = param_2->field_12;
        field_16 = param_2->field_0;
        field_24 = uVar1;
        *(int*)&field_28 = iVar2;
        uVar1 = param_3->field_8;
        iVar2 = param_3->field_12;
        m_vertex2 = param_3->field_0;
        field_44 = uVar1;
        *(int*)&field_48 = iVar2;
        field_52 = param_3->field_16;
        field_72 = param_4->field_16;
        uVar1 = param_4->field_8;
        iVar2 = param_4->field_12;
        field_56 = param_4->field_0;
        field_64 = uVar1;
        *(int*)&field_68 = iVar2;
        m_sourceModelExternalID = 0;
    }

    // 0x1008221b0, 16 bytes, complete-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource(unsigned int, ModelParticleSource::VertexBonePos const&, ModelParticleSource::VertexBonePos const&, ModelParticleSource::VertexBonePos const&): jumps straight to the base-object constructor

    // 0x1008221c0, 128 bytes, base-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource(unsigned int, ModelParticleSource::VertexBonePos const&)
    void ModelParticleSource::ModelParticleSource(uint param_1, VertexBonePos* param_2) {
        undefined4 uVar1;
        int iVar2;

        new (this) Transformable();
        new (this) MakeSharedPool<ModelParticleSource, 768>();
        field_0 = &PTR_Transform_100f15808;
        field_8 = 0;
        field_12 = param_1;
        field_32 = param_2->field_16;
        uVar1 = param_2->field_8;
        iVar2 = param_2->field_12;
        field_16 = param_2->field_0;
        field_24 = uVar1;
        *(int*)&field_28 = iVar2;
        uVar1 = param_2->field_8;
        iVar2 = param_2->field_12;
        m_vertex2 = param_2->field_0;
        field_44 = uVar1;
        *(int*)&field_48 = iVar2;
        field_52 = param_2->field_16;
        field_72 = param_2->field_16;
        uVar1 = param_2->field_8;
        iVar2 = param_2->field_12;
        field_56 = param_2->field_0;
        field_64 = uVar1;
        *(int*)&field_68 = iVar2;
        m_sourceModelExternalID = 0;
    }

    // 0x100822240, 16 bytes, complete-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource(unsigned int, ModelParticleSource::VertexBonePos const&): jumps straight to the base-object constructor

    // 0x100822250, 112 bytes, base-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource(ModelParticleSource const&)
    void ModelParticleSource::ModelParticleSource(ModelParticleSource* param_1) {
        uint uVar1;
        undefined4 uVar2;

        new (this) Transformable();
        new (this) MakeSharedPool<ModelParticleSource, 768>();
        field_0 = &PTR_Transform_100f15808;
        field_8 = param_1->field_8;
        field_12 = param_1->field_12;
        field_32 = param_1->field_32;
        uVar1 = param_1->field_24;
        uVar2 = *(undefined4*)&param_1->field_28;
        field_16 = param_1->field_16;
        field_24 = uVar1;
        *(undefined4*)&field_28 = uVar2;
        field_52 = param_1->field_52;
        uVar1 = param_1->field_44;
        uVar2 = *(undefined4*)&param_1->field_48;
        m_vertex2 = param_1->m_vertex2;
        field_44 = uVar1;
        *(undefined4*)&field_48 = uVar2;
        uVar1 = param_1->field_64;
        uVar2 = *(undefined4*)&param_1->field_68;
        field_56 = param_1->field_56;
        field_64 = uVar1;
        *(undefined4*)&field_68 = uVar2;
        field_72 = param_1->field_72;
        m_sourceModelExternalID = param_1->m_sourceModelExternalID;
    }

    // 0x1008222c0, 16 bytes, complete-object constructor, placed by class name
    // ModelParticleSource::ModelParticleSource(ModelParticleSource const&): jumps straight to the base-object constructor

    // 0x1008222d0, 64 bytes, placed by class name
    // ModelParticleSource::Transform(math::Matrix44T<float> const&)
    void ModelParticleSource::Transform(Matrix44T* param_1) {
        math::Vector3T<float>::operator*=((Vector3T<float>*)&field_16, param_1);
        if (field_8 != '\0') {
            math::Vector3T<float>::operator*=((Vector3T<float>*)&m_vertex2, param_1);
            math::Vector3T<float>::operator*=((Vector3T<float>*)&field_56, param_1);
        }
    }

    // 0x100822310, 64 bytes, placed by class name
    // ModelParticleSource::Translate(math::Vector3T<float> const&)
    void ModelParticleSource::Translate(Vector3T* param_1) {
        math::Vector3T<float>::operator+=((Vector3T<float>*)&field_16, param_1);
        if (field_8 != '\0') {
            math::Vector3T<float>::operator+=((Vector3T<float>*)&m_vertex2, param_1);
            math::Vector3T<float>::operator+=((Vector3T<float>*)&field_56, param_1);
        }
    }

    // 0x100822350, 64 bytes, placed by class name
    // ModelParticleSource::Rotate(math::QuaternionT<float> const&, bool)
    void ModelParticleSource::Rotate(QuaternionT* param_1, bool param_2) {
        math::Vector3T<float>::operator*=((Vector3T<float>*)&field_16, param_1);
        if (field_8 != '\0') {
            math::Vector3T<float>::operator*=((Vector3T<float>*)&m_vertex2, param_1);
            math::Vector3T<float>::operator*=((Vector3T<float>*)&field_56, param_1);
        }
    }

    // 0x100822390, 336 bytes, placed by class name
    // ModelParticleSource::Rotate90(Rotation90, bool)
    void ModelParticleSource::Rotate90(type* param_2) {
        Layout* this_00;
        char cVar1;
        undefined8* puVar2;
        undefined8* puVar3;
        uint* puVar4;
        vector* pvVar5;
        undefined8* local_60;
        undefined8* local_58;
        undefined8* local_50;
        uint local_48;
        undefined4 uStack_44;
        undefined4 uStack_40;
        undefined4 uStack_3c;

        if ((int)param_2 != 0) {
            cVar1 = (char)param_2;
            local_60 = &field_16;
            local_58 = &m_vertex2;
            local_50 = &field_56;
            puVar2 = (undefined8*)local_60.begin();
            puVar3 = (undefined8*)local_60.end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                this_00 = (Layout*)*puVar2;
                if (cVar1 == '\x03') {
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                    param_2 = (type*)this_00->second();
                    eastl::swap<float>((float*)pvVar5, (float*)param_2);
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                    local_48 = *(uint*)pvVar5 ^ 2147483648;
                    uStack_44 = 2147483648;
                    uStack_40 = 2147483648;
                    uStack_3c = 2147483648;
                    pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                LAB_100822439:
                    *(uint*)pvVar5 = local_48;
                } else {
                    if (cVar1 == '\x02') {
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                        local_48 = *(uint*)pvVar5 ^ 2147483648;
                        uStack_44 = 2147483648;
                        uStack_40 = 2147483648;
                        uStack_3c = 2147483648;
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                        *(uint*)pvVar5 = local_48;
                    LAB_10082241a:
                        puVar4 = (uint*)this_00->second();
                        local_48 = *puVar4 ^ 2147483648;
                        uStack_44 = 2147483648;
                        uStack_40 = 2147483648;
                        uStack_3c = 2147483648;
                        pvVar5 = (vector*)this_00->second();
                        goto LAB_100822439;
                    }
                    if (cVar1 == '\x01') {
                        pvVar5 = eastl::string::Layout::SSOBeginPtr(this_00, param_2);
                        param_2 = (type*)this_00->second();
                        eastl::swap<float>((float*)pvVar5, (float*)param_2);
                        goto LAB_10082241a;
                    }
                }
            }
        }
    }

} // namespace jag::graphics
