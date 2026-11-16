// libs/graphics/runetek7/particles/ParticleEffector.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.graphics

#include "ParticleEffector.h"
#include "libs/graphics/runetek7/model/GeometryBatch.h"

namespace jag::graphics {
    // 0x100009ca0: the linker folded this into eastl::compressed_pair_imp<eastl::string::Layout, eastl::allocator, 0>::first(), which has identical code
    ParticleEffector::GetEffectorSource() const;

    // 0x100023f30: the linker folded this into oldscape::option::IOption::GetName() const, which has identical code
    ParticleEffector::GetEffectorTemplate() const;

    // 0x100067280: the linker folded this into game::console::Snow::GetSnowPiles() const, which has identical code
    ParticleEffector::GetPosition() const;

    // 0x1000e10d0: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    ParticleEffector::~ParticleEffector();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    ParticleEffector::~ParticleEffector();

    // 0x10082d380, 128 bytes, base-object constructor, placed by class name and debug map
    // ParticleEffector::ParticleEffector(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*)
    void ParticleEffector::ParticleEffector(shared_ptr* param_1, ParticleManager* param_2, ParticleSystem* param_3) {
        new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
        field_16 = 0;
        field_24 = (ParticleManager*)0;
        field_32 = (ParticleSystem*)0;
        new (&field_40) math::Vector3T<int>();
        new (((long)&field_48 + 4)) math::Vector3T<int>();
        field_64 = 0;
        field_68 = 0;
        Initialise(this, param_1, param_2, param_3);
    }

    // 0x10082d400, 192 bytes, placed by class name and debug map
    // ParticleEffector::Initialise(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*)
    void ParticleEffector::Initialise(shared_ptr* param_1, ParticleManager* param_2, ParticleSystem* param_3) {
        bool bVar1;
        uint uVar2;
        Minimap* this_00;
        undefined8 uVar3;

        bVar1 = shared_ptr::operator_cast_to_bool(param_1);
        if (((bVar1) && (param_2 != (ParticleManager*)0)) && (param_3 != (ParticleSystem*)0)) {
            bVar1 = shared_ptr::operator_cast_to_bool(param_1);
            if (bVar1) {
                this_00 =
                    (Minimap*)shared_ptr<ModelParticleSource>::operator->((shared_ptr<ModelParticleSource>*)param_1);
                uVar2 = this_00->GetLevel();
                uVar3 = param_2->GetEffectorTemplate(uVar2);
                field_16 = uVar3;
                shared_ptr<ModelParticleSource>::operator=((shared_ptr<ModelParticleSource>*)this, param_1);
                field_24 = param_2;
                field_32 = param_3;
            } else {
                uVar3 = logger::default_logger();
                logger::Logger::Log(uVar3, 0, 2,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/"
                                    "runetek7/particles/ParticleEffector.cpp",
                                    33, "ParticleEffector: Unknown spec constructor");
            }
            return;
        }
        /* WARNING: Subroutine does not return */
        LogAssert("effectorSource && particleManager && parentSystem",
                  "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/graphics/runetek7/particles/"
                  "ParticleEffector.cpp",
                  19, (char*)0);
    }

    // 0x10082d4c0, 16 bytes, complete-object constructor, placed by class name and debug map
    // ParticleEffector::ParticleEffector(shared_ptr<ModelParticleSource> const&, ParticleManager*, ParticleSystem*): jumps straight to the base-object constructor

    // 0x10082d4d0, 16 bytes, placed by class name and debug map
    // ParticleEffector::MainLogic()
    undefined8 ParticleEffector::MainLogic() {
        return 0;
    }

    // 0x10082d4e0, 112 bytes, placed by class name and debug map
    // ParticleEffector::UpdatePosition(math::Vector3T<float> const&, math::Matrix33T<float> const&)
    void ParticleEffector::UpdatePosition(Vector3T* param_1, Matrix33T* param_2) {
        undefined8 local_30[2];

        local_30[0] = math::operator*((Vector3T*)(field_16 + 4), param_2);
        (((long)&field_48 + 4), (Vector3T*)local_30)->SetXYZ();
        if (math::operator!=(param_1, (Vector3T*)&field_40)) {
            (&field_40, param_1)->SetXYZ();
        }
        field_68 = field_64;
    }

    // 0x10082d9e0: the linker folded this into SharedVertexSkin::SharedVertexSkin(), which has identical code
    GeometryBatchVertexSkin::GeometryBatchVertexSkin();

} // namespace jag::graphics

namespace jag::math {
    // 0x10082da10, 112 bytes, inline, placed by debug map only (low confidence)
    // Vector3T<float> Vector3FromVector3T<signed char>(Vector3T<signed char> const&)
    undefined8 Vector3FromVector3T<signed char>(Vector3T* param_1) {
        vector* pvVar1;
        char* pcVar2;
        undefined8 uVar3;
        ColourHSL local_28;
        float local_18;
        float local_14;

        pvVar1 = SSOBeginPtr(param_1);
        local_18 = (float)(int)(char)*pvVar1;
        pcVar2 = (char*)y();
        local_14 = (float)(int)*pcVar2;
        pcVar2 = (char*)z();
        new (&local_28) ColourHSL(local_18, local_14, (float)(int)*pcVar2);
        uVar3._0_4_ = local_28.field_0;
        uVar3._4_4_ = local_28.field_4;
        return uVar3;
    }

} // namespace jag::math
