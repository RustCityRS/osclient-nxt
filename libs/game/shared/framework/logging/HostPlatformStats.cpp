// libs/game/shared/framework/logging/HostPlatformStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.shared

#include "HostPlatformStats.h"

namespace jag::game {
    // 0x1006e4b60, 16 bytes, placed by class name and debug map
    // HostPlatformStats::Init(graphics::RT7Core&)
    void HostPlatformStats::Init(RT7Core* param_1) {
        Init((HostPlatformStats*)param_1);
    }

    // 0x1006e4b70, 384 bytes, placed by class name and debug map
    // HostPlatformStats::Init()
    void HostPlatformStats::Init() {
        byte bVar1;
        undefined4 uVar2;
        ObjTypeList* this_00;
        vector* pvVar3;
        basic_string* pbVar4;
        undefined8* puVar5;
        tm* ptVar6;
        RenderDevice* pRVar7;
        type* in_RSI;
        int local_30;
        int local_2c;
        undefined** local_28;
        OperatingSystem local_1c[4];

        this_00 = (ObjTypeList*)Instance();
        pvVar3 = this_00->SSOBeginPtr(in_RSI);
        eastl::string::operator=((eastl::string*)&field_176, (basic_string*)pvVar3);
        pbVar4 = (basic_string*)this_00->GetDefaultValue();
        eastl::string::operator=((eastl::string*)&field_144, pbVar4);
        uVar2 = this_00->GetStreamCountLastMix();
        field_232 = uVar2;
        uVar2 = this_00->GetAmplitude();
        field_208 = uVar2;
        uVar2 = this_00->GetDuration();
        field_212 = uVar2;
        uVar2 = this_00->GetWrapMode();
        field_216 = uVar2;
        puVar5 = (undefined8*)this_00->GetFogOverrides();
        field_220 = *puVar5;
        field_228 = *(undefined4*)(puVar5 + 1);
        this_00->GetOSVersion(local_1c, &local_30, &local_2c);
        bVar1 = this_00->Is64BitOS();
        field_4 = (uint)bVar1;
        *(OperatingSystem(*)[4])field_0 = local_1c;
        uVar2 = this_00->GetLegacyOSVersion();
        field_8 = uVar2;
        pbVar4 = (basic_string*)this_00->GetCursorMutex();
        eastl::string::operator=((eastl::string*)&field_240, pbVar4);
        pbVar4 = (basic_string*)this_00->GetModelCache();
        eastl::string::operator=((eastl::string*)&field_280, pbVar4);
        local_28 = (undefined**)this_00->GetGPUDriverDate();
        if (local_28 != (undefined**)0) {
            this_00 = (ObjTypeList*)&local_28;
            ptVar6 = _localtime((time_t*)this_00);
            if (ptVar6 != (tm*)0) {
                field_272 = ptVar6->tm_mon + 1;
                field_276 = ptVar6->tm_year + 1900;
            }
        }
        pRVar7 = (RenderDevice*)this_00->Instance();
        pRVar7->GetDeviceInfo(&field_48, 3);
        pRVar7 = (RenderDevice*)pRVar7->Instance();
        pRVar7->GetDeviceInfo(&field_112, 4);
    }

    // 0x1006e4d40, 496 bytes, placed by class name and debug map
    // HostPlatformStats::Serialise() const
    HostPlatformStats* HostPlatformStats::Serialise() {
        uint uVar1;
        int* piVar2;
        ulong uVar3;
        HostPlatformStats* in_RSI;

        uVar1 = GetSerialisedSize(in_RSI);
        new (this) PacketT<Array<unsigned char, BucketAllocatorEASTL>>((ulong)uVar1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 9);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, *(undefined4*)in_RSI->field_0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_4 != 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_8);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 1);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p3<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_216);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, 0);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_16, true);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_48, true);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_80, true);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_112, true);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_272);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p2<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_276);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_144, true);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_176, true);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_208);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p1<oldscape::shared::LoginProt::ID>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_212);
        uVar3 = 0;
        do {
            piVar2 =
                (int*)std::array<unsigned int, 3ul>::operator[]((array<unsigned int, 3ul>*)&in_RSI->field_220, uVar3);
            PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
                (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, *piVar2);
            uVar3 = uVar3 + 1;
        } while (uVar3 != 3);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::p4<int>(
            (PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this, in_RSI->field_232);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_240, true);
        PacketT<Array<unsigned char, BucketAllocatorEASTL>>::pStringUTF8ToCP1252<
            eastl::basic_string<char, BucketAllocatorEASTL>>((PacketT<Array<unsigned char, BucketAllocatorEASTL>>*)this,
                                                             (basic_string*)&in_RSI->field_280, true);
        return this;
    }

    // 0x1006e4f30, 208 bytes, placed by class name and debug map
    // HostPlatformStats::GetSerialisedSize() const
    int HostPlatformStats::GetSerialisedSize() {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        int iVar6;
        int iVar7;
        int iVar8;

        iVar1 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_16, true);
        iVar2 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_48, true);
        iVar3 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_80, true);
        iVar4 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_112, true);
        iVar5 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_144, true);
        iVar6 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_176, true);
        iVar7 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_240, true);
        iVar8 = PacketT<Array<unsigned char, eastl::allocator>>::predictLengthPStringUTF8ToCP1252<eastl::string>(
            (basic_string*)&field_280, true);
        return iVar8 + iVar7 + iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + iVar1 + 39;
    }

    // 0x1006e50b0, 112 bytes, placed by class name and debug map
    // HostPlatformStats::Reset()
    void HostPlatformStats::Reset() {
        eastl::string::clear();
        eastl::string::clear();
        eastl::string::clear();
        eastl::string::clear();
        eastl::string::clear();
        eastl::string::clear();
        eastl::string::clear();
        eastl::string::clear();
    }

} // namespace jag::game
