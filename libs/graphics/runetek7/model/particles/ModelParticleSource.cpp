// libs/graphics/runetek7/model/particles/ModelParticleSource.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ModelParticleSource.h"

namespace jag::graphics {
    // 0x100009e70: ModelParticleSource::~ModelParticleSource() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x1000b7910: ModelParticleSource::GetVertex3() const has the same machine code as oldscape::minimenu::MinimenuEntry::GetSubjectName() const

    // 0x1000b9950: ModelParticleSource::GetVertex1() const has the same machine code as oldscape::ScriptVarType::GetDefaultValue() const

    // 0x1000e5d50: ModelParticleSource::GetTemplateID() const has the same machine code as oldscape::rs2lib::CoordZoneSource::GetRotation() const

    // 0x10016b4a0: ModelParticleSource::GetSourceModelExternalID() const has the same machine code as oldscape::rs2lib::worldmap::WorldmapAreaMetadata::GetAdvisedZoom() const

    // 0x1003e7ff0: ModelParticleSource::GetVertex2() const has the same machine code as math::SmoothRotation::GetFinalRotation() const

    // 0x10040f290: ModelParticleSource::SetSourceModelExternalID(int) has the same machine code as game::ChangeLocationRequest::SetLocationID(int)

    // 0x100456f20: ModelParticleSource::VertexBonePos::VertexBonePos(math::Vector3T<float> const&, int, int) has the same machine code as game::CoordGridSize::CoordGridSize(game::CoordGrid const&, int, int)

    // 0x10081d4b0
    void ModelParticleSource::Scale(const math::Vector3T<float>& vector3) {
        m_vertex1 *= vector3;
        m_vertex2 *= vector3;
        m_vertex3 *= vector3;
    }

    // 0x10081d6a0
    void ModelParticleSource::MirrorZ() {
        field_24 = field_24 ^ 2147483648;
        field_44 = field_44 ^ 2147483648;
        field_64 = field_64 ^ 2147483648;
    }

    // 0x10081d9a0
    void ModelParticleSource::HillChange(HillChange arg1, int arg2,
                                         const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg3,
                                         const Array<Array<int, BucketAllocatorEASTL>, BucketAllocatorEASTL>& arg4,
                                         const LocationHelpers::LocationHillChangeData& arg5) {
        int iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, m_vertex1);
        auto pfVar1 = m_vertex1.y();
        *pfVar1 = (float)iVar2;
        if (field_8 != '\0') {
            iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, m_vertex2);
            pfVar1 = (float*)m_vertex2.y();
            *pfVar1 = (float)iVar2;
            iVar2 = LocationHelpers::HillChangeVertex(param_2, param_3, *param_6, *param_4, *param_5, m_vertex3);
            pfVar1 = (float*)m_vertex3.y();
            *pfVar1 = (float)iVar2;
        }
    }

    // 0x100822050
    ModelParticleSource::ModelParticleSource()
        : Transformable(), MakeSharedPool<ModelParticleSource, 768>(), field_8(0), m_templateID(0),
          m_sourceModelExternalID(0) {}

    // 0x100822130
    ModelParticleSource::ModelParticleSource(unsigned int arg1,
                                             const ModelParticleSource::VertexBonePos& vertexBonePos1,
                                             const ModelParticleSource::VertexBonePos& vertexBonePos2,
                                             const ModelParticleSource::VertexBonePos& vertexBonePos3)
        : Transformable(), MakeSharedPool<ModelParticleSource, 768>(), field_8(1), m_templateID(arg1),
          field_32(vertexBonePos1.field_16) {
        unsigned int uVar1 = vertexBonePos1.field_8;
        int iVar2 = vertexBonePos1.field_12;
        m_vertex1 = *(uint64_t*)vertexBonePos1;
        field_24 = uVar1;
        *(int*)&field_28 = iVar2;
        uVar1 = vertexBonePos2.field_8;
        iVar2 = vertexBonePos2.field_12;
        m_vertex2 = *(uint64_t*)vertexBonePos2;
        field_44 = uVar1;
        *(int*)&field_48 = iVar2;
        field_52 = vertexBonePos2.field_16;
        field_72 = vertexBonePos3.field_16;
        uVar1 = vertexBonePos3.field_8;
        iVar2 = vertexBonePos3.field_12;
        m_vertex3 = *(uint64_t*)vertexBonePos3;
        field_64 = uVar1;
        *(int*)&field_68 = iVar2;
        m_sourceModelExternalID = 0;
    }

    // 0x1008221c0
    ModelParticleSource::ModelParticleSource(unsigned int arg1, const ModelParticleSource::VertexBonePos& vertexBonePos)
        : Transformable(), MakeSharedPool<ModelParticleSource, 768>(), field_8(0), m_templateID(arg1),
          field_32(vertexBonePos.field_16) {
        unsigned int uVar1 = vertexBonePos.field_8;
        int iVar2 = vertexBonePos.field_12;
        m_vertex1 = *(uint64_t*)vertexBonePos;
        field_24 = uVar1;
        *(int*)&field_28 = iVar2;
        uVar1 = vertexBonePos.field_8;
        iVar2 = vertexBonePos.field_12;
        m_vertex2 = *(uint64_t*)vertexBonePos;
        field_44 = uVar1;
        *(int*)&field_48 = iVar2;
        field_52 = vertexBonePos.field_16;
        field_72 = vertexBonePos.field_16;
        uVar1 = vertexBonePos.field_8;
        iVar2 = vertexBonePos.field_12;
        m_vertex3 = *(uint64_t*)vertexBonePos;
        field_64 = uVar1;
        *(int*)&field_68 = iVar2;
        m_sourceModelExternalID = 0;
    }

    // 0x100822250
    ModelParticleSource::ModelParticleSource(const ModelParticleSource& modelParticleSource)
        : Transformable(), MakeSharedPool<ModelParticleSource, 768>(), field_8(modelParticleSource.field_8),
          m_templateID(modelParticleSource.m_templateID), field_32(modelParticleSource.field_32) {
        unsigned int uVar1 = modelParticleSource.field_24;
        uint32_t uVar2 = *(uint32_t*)&modelParticleSource.field_28;
        m_vertex1 = modelParticleSource.m_vertex1;
        field_24 = uVar1;
        *(uint32_t*)&field_28 = uVar2;
        field_52 = modelParticleSource.field_52;
        uVar1 = modelParticleSource.field_44;
        uVar2 = *(uint32_t*)&modelParticleSource.field_48;
        m_vertex2 = modelParticleSource.m_vertex2;
        field_44 = uVar1;
        *(uint32_t*)&field_48 = uVar2;
        uVar1 = modelParticleSource.field_64;
        uVar2 = *(uint32_t*)&modelParticleSource.field_68;
        m_vertex3 = modelParticleSource.m_vertex3;
        field_64 = uVar1;
        *(uint32_t*)&field_68 = uVar2;
        field_72 = modelParticleSource.field_72;
        m_sourceModelExternalID = modelParticleSource.m_sourceModelExternalID;
    }

    // 0x1008222d0
    void ModelParticleSource::Transform(const math::Matrix44T<float>& matrix44) {
        m_vertex1 *= matrix44;
        if (field_8 != '\0') {
            m_vertex2 *= matrix44;
            m_vertex3 *= matrix44;
        }
    }

    // 0x100822310
    void ModelParticleSource::Translate(const math::Vector3T<float>& vector3) {
        m_vertex1 += vector3;
        if (field_8 != '\0') {
            m_vertex2 += vector3;
            m_vertex3 += vector3;
        }
    }

    // 0x100822350
    void ModelParticleSource::Rotate(const math::QuaternionT<float>& quaternion, bool arg2) {
        m_vertex1 *= quaternion;
        if (field_8 != '\0') {
            m_vertex2 *= quaternion;
            m_vertex3 *= quaternion;
        }
    }

    // 0x100822390
    void ModelParticleSource::Rotate90(Rotation90 rotation90, bool arg2) {
        unsigned int uVar1;
        Layout* this_00;
        uint64_t* puVar2;
        uint64_t* puVar3;
        unsigned int* puVar4;
        float* pfVar5;
        float* pfVar6;
        unsigned int local_48;

        if (rotation90 != 0) {
            puVar2 = (uint64_t*)std::array<math::Vector3T<float>*, 3ul>::begin();
            puVar3 = (uint64_t*)std::array<math::Vector3T<float>*, 3ul>::end();
            for (; puVar2 != puVar3; puVar2 = puVar2 + 1) {
                this_00 = (Layout*)*puVar2;
                if ((char)rotation90 == '\x03') {
                    pfVar5 = (float*)this_00->SSOBeginPtr();
                    pfVar6 = (float*)this_00->second();
                    eastl::swap<float>(*pfVar5, *pfVar6);
                    puVar4 = (unsigned int*)this_00->SSOBeginPtr();
                    local_48 = *puVar4;
                    puVar4 = (unsigned int*)this_00->SSOBeginPtr();
                LAB_100822439:
                    local_48 = local_48 ^ 2147483648;
                    *puVar4 = local_48;
                } else {
                    if ((char)rotation90 == '\x02') {
                        puVar4 = (unsigned int*)this_00->SSOBeginPtr();
                        uVar1 = *puVar4;
                        puVar4 = (unsigned int*)this_00->SSOBeginPtr();
                        *puVar4 = uVar1 ^ 2147483648;
                    LAB_10082241a:
                        puVar4 = (unsigned int*)this_00->second();
                        local_48 = *puVar4;
                        puVar4 = (unsigned int*)this_00->second();
                        goto LAB_100822439;
                    }
                    if ((char)rotation90 == '\x01') {
                        pfVar5 = (float*)this_00->SSOBeginPtr();
                        pfVar6 = (float*)this_00->second();
                        eastl::swap<float>(*pfVar5, *pfVar6);
                        goto LAB_10082241a;
                    }
                }
            }
        }
    }

} // namespace jag::graphics
