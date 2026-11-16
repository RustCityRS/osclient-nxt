// libs/math/conversion/Rotation.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::graphics::particlemodules {
    class Rotation {
    public:
        // virtual methods in vtable order
        virtual ~Rotation();
        virtual LoadFromPacket(unsigned char, PacketT<Array<unsigned char, eastl::allocator>>&);
        virtual float ProcessTick(float, ParticleModuleUpdateParams const&, ParticleModuleUpdateState&,
                                  ParticleData&) const;
        Rotation();

        // data members, from how the methods use this: 120 bytes
        undefined** field_0; // offset 0, vtable pointer
        bool field_8;        // offset 8
        char _unknown_9[3];
        float field_12; // offset 12
        float field_16; // offset 16
        char _unknown_20[100];
    };

    // 0x1007e5220, 16 bytes, complete-object destructor, inline, placed by class name
    // Rotation::~Rotation(): jumps straight to the base-object destructor

    // 0x1007e5230, 32 bytes, deleting destructor, inline, placed by class name
    // Rotation::~Rotation()
    void Rotation::~Rotation() {
        ~Rotation(this);
        operator_delete(this);
    }

    // 0x1007e8940, 64 bytes, base-object destructor, inline, placed by class name
    // Rotation::~Rotation()
    void Rotation::~Rotation() {
        field_0 = &PTR__Rotation_100f14ed8;
        (&field_112)->~ModulePropertyCurve();
        (&field_24)->~ModulePropertyCurve();
        ~AutoSingleton();
    }

    // 0x100829e20, 16 bytes, complete-object constructor, inline, placed by class name
    // Rotation::Rotation(): jumps straight to the base-object constructor

    // 0x10082f5c0, 96 bytes, base-object constructor, inline, placed by class name
    // Rotation::Rotation()
    void Rotation::Rotation() {
        new (this) Module();
        field_0 = &PTR__Rotation_100f14ed8;
        new (&field_24) ModulePropertyCurve<float>();
        new (&field_112) ModulePropertyCurve<float>();
    }

} // namespace jag::graphics::particlemodules

namespace jag::game {
    // 0x100529800, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::Cutscene2DPlaybackState(): jumps straight to the base-object constructor

    // 0x100529cd0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Cutscene2DPlaybackState::Cutscene2DPlaybackState()
    void Cutscene2DPlaybackState::Cutscene2DPlaybackState() {
        new (this) eastl::bitset<4ul, unsigned char>();
        field_4 = 0.0;
        field_8 = 0.0;
    }

    // 0x100529d50, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // GlobalCutscene2DResources::GlobalCutscene2DResources()
    void GlobalCutscene2DResources::GlobalCutscene2DResources() {
        field_0 = 1;
        new (&field_8) eastl::vector_map<unsigned char, int, eastl::less<unsigned char>, eastl::allocator,
                                         eastl::vector<eastl::pair<unsigned char, int>, eastl::allocator>>();
    }

    // 0x100529e80, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // GlobalCutscene2DResources::~GlobalCutscene2DResources()
    void GlobalCutscene2DResources::~GlobalCutscene2DResources() {
        (&field_8)->~vector_map();
    }

} // namespace jag::game

namespace jag::math {
    // 0x1005290a0, 144 bytes, inline, placed by debug map only (low confidence)
    // operator-(Vector3T<float> const&, Rotation90 const&)
    /* TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&, Rotation90 const&) */

    undefined8 operator-(Vector3T* param_1, Rotation90* param_2) {
        char cVar1;
        float fVar2;
        undefined8 uVar3;
        float fVar4;
        float fVar5;
        ColourHSL local_18;

        cVar1 = *param_2;
        if (cVar1 == '\x03') {
            fVar2 = *(float*)(param_1 + 8);
            fVar4 = *(float*)(param_1 + 4);
            fVar5 = -*(float*)param_1;
        } else if (cVar1 == '\x02') {
            fVar2 = -*(float*)param_1;
            fVar4 = *(float*)(param_1 + 4);
            fVar5 = -*(float*)(param_1 + 8);
        } else {
            if (cVar1 != '\x01') {
                return *(undefined8*)param_1;
            }
            fVar2 = -*(float*)(param_1 + 8);
            fVar5 = *(float*)param_1;
            fVar4 = *(float*)(param_1 + 4);
        }
        new (&local_18) ColourHSL(fVar2, fVar4, fVar5);
        uVar3._0_4_ = local_18.field_0;
        uVar3._4_4_ = local_18.field_4;
        return uVar3;
    }

    // 0x100529130, 80 bytes, inline, placed by debug map only (low confidence)
    // operator*(Vector3T<float> const&, Rotation90 const&)
    /* TEMPNAMEPLACEHOLDERVALUE(Vector3T<float> const&, Rotation90 const&) */

    undefined8 operator*(Vector3T* param_1, Rotation90* param_2) {
        undefined8 uVar1;
        ColourHSL local_18;

        if ((*param_2 | 2) == 3) {
            new (&local_18) ColourHSL(*(float*)(param_1 + 8), *(float*)(param_1 + 4), *(float*)param_1);
        } else {
            local_18._0_8_ = *(undefined8*)param_1;
        }
        uVar1._0_4_ = local_18.field_0;
        uVar1._4_4_ = local_18.field_4;
        return uVar1;
    }

    // 0x1005294c0, 464 bytes, inline, placed by debug map only (low confidence)
    // Matrix44T<float>::ApplyScaling(Vector3T<float> const&)
    Matrix44T<float>* Matrix44T<float>::ApplyScaling(Vector3T* param_1) {
        Vector4T<float>* pVVar1;
        float fVar2;
        float* pfVar3;

        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar2 = *pfVar3;
        pfVar3 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 0);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        fVar2 = *pfVar3;
        pfVar3 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 1);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        fVar2 = *pfVar3;
        pfVar3 = (float*)Vector4T<float>::operator[]((Vector4T<float>*)this, 2);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar2 = *pfVar3;
        pVVar1 = (Vector4T<float>*)(this + 16);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        fVar2 = *pfVar3;
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        fVar2 = *pfVar3;
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 0);
        fVar2 = *pfVar3;
        pVVar1 = (Vector4T<float>*)(this + 32);
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar1, 0);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 1);
        fVar2 = *pfVar3;
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar1, 1);
        *pfVar3 = fVar2 * *pfVar3;
        pfVar3 = (float*)Vector3T<float>::operator[]((Vector3T<float>*)param_1, 2);
        fVar2 = *pfVar3;
        pfVar3 = (float*)Vector4T<float>::operator[](pVVar1, 2);
        *pfVar3 = fVar2 * *pfVar3;
        return this;
    }

} // namespace jag::math
