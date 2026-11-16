// libs/core/utils/CommonUtils.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    // 0x1004768f0
    ServerSyncingCycle* ServerSyncingCycle::operator=(ServerSyncingCycle&& serverSyncingCycle) {
        int iVar1 = serverSyncingCycle.field_4;
        m_cycle = serverSyncingCycle.m_cycle;
        field_4 = iVar1;
        field_8 = serverSyncingCycle.field_8;
        unsigned int uVar2 = serverSyncingCycle.field_1692;
        field_1688 = serverSyncingCycle.field_1688;
        field_1692 = uVar2;
        return this;
    }

    // 0x100476930
    ServerSyncingCycle::ServerSyncingCycle(ServerSyncingCycle&& serverSyncingCycle) {
        int iVar1 = serverSyncingCycle.field_4;
        m_cycle = serverSyncingCycle.m_cycle;
        field_4 = iVar1;
        new (&field_8) eastl::fixed_map<int, ServerSyncingCycle::SyncUserEntry, 32ul>(serverSyncingCycle.field_8);
        unsigned int uVar2 = serverSyncingCycle.field_1692;
        field_1688 = serverSyncingCycle.field_1688;
        field_1692 = uVar2;
    }

} // namespace jag::game

namespace jag {
    // 0x10046d0a0
    void Swap<float>(float& arg1, float& arg2) {
        float fVar1 = arg1;
        arg1 = arg2;
        arg2 = fVar1;
    }

} // namespace jag

namespace jag::math {
    // 0x100476350
    PlaneT<float>* PlaneT<float>::operator*=(const Matrix44T<float>& matrix44) {
        uint64_t local_48[2];

        local_48[0] = (*(-*(float*)(this + 12))) * *this;
        Vector4T<float> local_78(*local_48, 1.0);
        local_78 *= matrix44;
        new (local_48) Vector4T(*this, 0.0);
        *local_48 *= matrix44;
        auto pfVar1 = local_48->SSOBeginPtr();
        float local_30 = *pfVar1;
        pfVar1 = (float*)local_48->y();
        float local_2c = *pfVar1;
        pfVar1 = (float*)local_48->second();
        ColourHSL local_68(local_30, local_2c, *pfVar1);
        pfVar1 = (float*)local_78.SSOBeginPtr();
        local_30 = *pfVar1;
        pfVar1 = (float*)local_78.qw();
        local_30 = local_30 / *pfVar1;
        pfVar1 = (float*)local_78.y();
        local_2c = *pfVar1;
        pfVar1 = (float*)local_78.qw();
        local_2c = local_2c / *pfVar1;
        pfVar1 = (float*)local_78.second();
        float local_34 = *pfVar1;
        pfVar1 = (float*)local_78.qw();
        ColourHSL local_58(local_30, local_2c, local_34 / *pfVar1);
        Set(this, (Vector3T<float>*)&local_68, (Vector3T<float>*)&local_58);
        return this;
    }

} // namespace jag::math
