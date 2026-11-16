// libs/core/utils/CommonUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    // 0x1004768e0, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // ServerSyncingCycle::ServerSyncingCycle(ServerSyncingCycle&&): jumps straight to the base-object constructor

    // 0x1004768f0, 64 bytes, inline, placed by debug map only (low confidence)
    // ServerSyncingCycle::operator=(ServerSyncingCycle&&)
    /* ServerSyncingCycle::TEMPNAMEPLACEHOLDERVALUE(ServerSyncingCycle&&) */

    ServerSyncingCycle* ServerSyncingCycle::operator=(ServerSyncingCycle* param_1) {
        int iVar1;
        uint uVar2;

        iVar1 = param_1->field_4;
        m_cycle = param_1->m_cycle;
        field_4 = iVar1;
        eastl::fixed_map<int, ServerSyncingCycle::SyncUserEntry, 32ul, true, eastl::less<int>,
                         eastl::allocator>::operator=((fixed_map<int, ServerSyncingCycle::SyncUserEntry, 32ul, true,
                                                                 eastl::less<int>, eastl::allocator>*)&field_8,
                                                      (fixed_map*)&param_1->field_8);
        uVar2 = param_1->field_1692;
        field_1688 = param_1->field_1688;
        field_1692 = uVar2;
        return this;
    }

    // 0x100476930, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // ServerSyncingCycle::ServerSyncingCycle(ServerSyncingCycle&&)
    void ServerSyncingCycle::ServerSyncingCycle(ServerSyncingCycle* param_1) {
        int iVar1;
        uint uVar2;

        iVar1 = param_1->field_4;
        m_cycle = param_1->m_cycle;
        field_4 = iVar1;
        new (&field_8, (fixed_map*)&param_1->field_8)
            eastl::fixed_map<int, ServerSyncingCycle::SyncUserEntry, 32ul, true, eastl::less<int>, eastl::allocator>();
        uVar2 = param_1->field_1692;
        field_1688 = param_1->field_1688;
        field_1692 = uVar2;
    }

} // namespace jag::game

namespace jag {
    // 0x10046d0a0, 32 bytes, inline, placed by debug map only (low confidence)
    // void Swap<float>(float&, float&)
    void Swap<float>(float* param_1, float* param_2) {
        float fVar1;

        fVar1 = *param_1;
        *param_1 = *param_2;
        *param_2 = fVar1;
    }

} // namespace jag

namespace jag::math {
    // 0x100476350, 352 bytes, inline, placed by debug map only (low confidence)
    // PlaneT<float>::operator*=(Matrix44T<float> const&)
    /* PlaneT<float>::TEMPNAMEPLACEHOLDERVALUE(Matrix44T<float> const&) */

    PlaneT<float>* PlaneT<float>::operator*=(Matrix44T* param_1) {
        vector* pvVar1;
        float* pfVar2;
        Vector4T<float> local_78[16];
        ColourHSL local_68;
        ColourHSL local_58;
        undefined8 local_48[2];
        float local_34;
        float local_30;
        float local_2c;

        local_48[0] = math::operator*((Vector3T*)this, -*(float*)(this + 12));
        Vector4T<float>::Vector4T(local_78, (Vector3T*)local_48, 1.0);
        Vector4T<float>::operator*=(local_78, param_1);
        new (local_48) Vector4T<float>(this, 0.0);
        Vector4T<float>::operator*=((Vector4T<float>*)local_48, param_1);
        pvVar1 = local_48->SSOBeginPtr(param_1);
        local_30 = *(float*)pvVar1;
        pfVar2 = (float*)local_48->y();
        local_2c = *pfVar2;
        pfVar2 = (float*)local_48->second();
        new (&local_68) ColourHSL(local_30, local_2c, *pfVar2);
        pvVar1 = local_78->SSOBeginPtr(param_1);
        local_30 = *(float*)pvVar1;
        pfVar2 = (float*)local_78->qw();
        local_30 = local_30 / *pfVar2;
        pfVar2 = (float*)local_78->y();
        local_2c = *pfVar2;
        pfVar2 = (float*)local_78->qw();
        local_2c = local_2c / *pfVar2;
        pfVar2 = (float*)local_78->second();
        local_34 = *pfVar2;
        pfVar2 = (float*)local_78->qw();
        new (&local_58) ColourHSL(local_30, local_2c, local_34 / *pfVar2);
        Set(this, (Vector3T*)&local_68, (Vector3T*)&local_58);
        return this;
    }

} // namespace jag::math
