// libs/game/shared/framework/logging/HostPlatformStats.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.shared

#include "HostPlatformStats.h"

namespace jag::game {
    // 0x1006e4b60
    void HostPlatformStats::Init(graphics::RT7Core& rt7Core) {
        Init();
    }

    // 0x1006e4b70
    void HostPlatformStats::Init() {
        tm* ptVar6;
        int local_30;
        int local_2c;
        OperatingSystem local_1c;

        auto this_00 = Instance();
        auto pbVar4 = this_00->SSOBeginPtr();
        field_176 = pbVar4;
        pbVar4 = (eastl::string*)this_00->GetDefaultValue();
        field_144 = pbVar4;
        field_232 = this_00->GetStreamCountLastMix();
        uint32_t uVar3 = this_00->GetAmplitude();
        field_208 = uVar3;
        uVar3 = this_00->GetDuration();
        field_212 = uVar3;
        uVar3 = this_00->GetWrapMode();
        field_216 = uVar3;
        auto puVar5 = this_00->GetFogOverrides();
        field_220 = *puVar5;
        field_228 = *(uint32_t*)(puVar5 + 1);
        this_00->GetOSVersion(local_1c, local_30, local_2c);
        uint8_t bVar1 = this_00->Is64BitOS();
        field_4 = (unsigned int)bVar1;
        *(OperatingSystem(*)[4])field_0 = &local_1c;
        uVar3 = this_00->GetLegacyOSVersion();
        field_8 = uVar3;
        pbVar4 = (eastl::string*)this_00->GetCursorMutex();
        field_240 = pbVar4;
        pbVar4 = (eastl::string*)this_00->GetModelCache();
        field_280 = pbVar4;
        auto local_28 = this_00->GetGPUDriverDate();
        if (local_28 != nullptr) {
            this_00 = (ObjTypeList*)&local_28;
            ptVar6 = _localtime((time_t*)this_00);
            if (ptVar6 != nullptr) {
                field_272 = ptVar6->tm_mon + 1;
                field_276 = ptVar6->tm_year + 1900;
            }
        }
        auto pRVar7 = this_00->Instance();
        pRVar7->GetDeviceInfo(field_48, 3);
        pRVar7 = (RenderDevice*)pRVar7->Instance();
        pRVar7->GetDeviceInfo(field_112, 4);
    }

    // 0x1006e4d40
    auto HostPlatformStats::Serialise() const {
        unsigned int* puVar2;

        unsigned int uVar1 = GetSerialisedSize();
        auto result((unsigned long)uVar1);
        result.p1<oldscape::shared::LoginProt::ID>(9);
        result.p1<oldscape::shared::LoginProt::ID>(*(PublishingPlatformType*)field_0);
        result.p1<oldscape::shared::LoginProt::ID>((unsigned int)(field_4 != 0));
        result.p2<int>(field_8);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p1<oldscape::shared::LoginProt::ID>(0);
        result.p2<int>(0);
        result.p1<oldscape::shared::LoginProt::ID>(1);
        result.p3<int>(field_216);
        result.p2<int>(0);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_16, true);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_48, true);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_80, true);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_112, true);
        result.p1<oldscape::shared::LoginProt::ID>(field_272);
        result.p2<int>(field_276);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_144, true);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_176, true);
        result.p1<oldscape::shared::LoginProt::ID>(field_208);
        result.p1<oldscape::shared::LoginProt::ID>(field_212);
        unsigned long arg1 = 0;
        do {
            puVar2 = &field_220[arg1];
            result.p4<int>((unsigned long)*puVar2);
            arg1 = arg1 + 1;
        } while (arg1 != 3);
        result.p4<int>((unsigned long)field_232);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_240, true);
        result.pStringUTF8ToCP1252<eastl::basic_string<char, BucketAllocatorEASTL>>(field_280, true);
        return result;
    }

    // 0x1006e4f30
    int HostPlatformStats::GetSerialisedSize() const {
        int iVar1 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_16, true);
        int iVar2 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_48, true);
        int iVar3 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_80, true);
        int iVar4 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_112, true);
        int iVar5 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_144, true);
        int iVar6 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_176, true);
        int iVar7 = PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_240, true);
        return PacketT<Array<unsigned char>>::predictLengthPStringUTF8ToCP1252<eastl::string>(field_280, true) + iVar7 +
               iVar6 + iVar5 + iVar4 + iVar3 + iVar2 + iVar1 + 39;
    }

    // 0x1006e50b0
    void HostPlatformStats::Reset() {
        field_16.clear();
        field_48.clear();
        field_80.clear();
        field_112.clear();
        field_144.clear();
        field_176.clear();
        field_240.clear();
        field_280.clear();
    }

} // namespace jag::game
