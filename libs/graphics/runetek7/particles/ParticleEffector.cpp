// libs/graphics/runetek7/particles/ParticleEffector.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.graphics

#include "ParticleEffector.h"
#include "libs/graphics/runetek7/model/GeometryBatch.h"

namespace jag::graphics {
    // 0x100009ca0: ParticleEffector::GetEffectorSource() const has the same machine code as eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first()

    // 0x100023f30: ParticleEffector::GetEffectorTemplate() const has the same machine code as oldscape::option::IOption::GetName() const

    // 0x100067280: ParticleEffector::GetPosition() const has the same machine code as game::console::Snow::GetSnowPiles() const

    // 0x10012d160: ParticleEffector::~ParticleEffector() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x10082d380
    ParticleEffector::ParticleEffector(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                       ParticleManager* particleManager, ParticleSystem* particleSystem)
        : shared_ptr(), m_effectorTemplate(0), field_24(nullptr), field_32(nullptr) {
        new ((Vector3T<int>*)((long)&field_48 + 4)) math::Vector3T();
        field_64 = 0;
        field_68 = 0;
        Initialise(modelParticleSource, particleManager, particleSystem);
    }

    // 0x10082d400
    void ParticleEffector::Initialise(const shared_ptr<ModelParticleSource>& modelParticleSource,
                                      ParticleManager* particleManager, ParticleSystem* particleSystem) {
        bool cVar1 = modelParticleSource.operator_cast_to_bool();
        if (((!cVar1) || (particleManager == nullptr)) || (particleSystem == nullptr)) {
            LogAssert("effectorSource && particleManager && parentSystem",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEffector.cpp",
                      19, nullptr);
        }
        cVar1 = modelParticleSource.operator_cast_to_bool();
        if (!cVar1) {
            (logger::default_logger())
                ->Log(false, 2,
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/"
                      "particles/ParticleEffector.cpp",
                      33, "ParticleEffector: Unknown spec constructor");
        } else {
            m_effectorTemplate =
                particleManager->GetEffectorTemplate(((Minimap*)modelParticleSource.operator->())->GetLevel());
            *this = modelParticleSource;
            field_24 = particleManager;
            field_32 = particleSystem;
        }
    }

    // 0x10082d4d0
    void ParticleEffector::MainLogic() {
        return 0;
    }

    // 0x10082d4e0
    void ParticleEffector::UpdatePosition(const math::Vector3T<float>& vector3,
                                          const math::Matrix33T<float>& matrix33) {
        uint64_t local_30[2];

        local_30[0] = (*((m_effectorTemplate + 4))) matrix33;
        ((Vector4T<float>*)((long)&field_48 + 4))->SetXYZ(*local_30);
        if (vector3 != field_40) {
            field_40.SetXYZ(vector3);
        }
        field_68 = field_64;
    }

    // 0x10082d9e0: GeometryBatchVertexSkin::GeometryBatchVertexSkin() has the same machine code as SharedVertexSkin::SharedVertexSkin()

} // namespace jag::graphics

namespace jag::math {
    // 0x10082da10
    Vector3T<float> Vector3FromVector3T<signed char>(const Vector3T<signed char>& vector3) {
        uint64_t uVar2;

        auto pcVar1 = vector3.SSOBeginPtr();
        float local_18 = (float)(int)*pcVar1;
        pcVar1 = (char*)vector3.y();
        float local_14 = (float)(int)*pcVar1;
        pcVar1 = (char*)vector3.z();
        ColourHSL local_28(local_18, local_14, (float)(int)*pcVar1);
        uVar2._0_4_ = local_28.field_0;
        uVar2._4_4_ = local_28.field_4;
        return uVar2;
    }

} // namespace jag::math
