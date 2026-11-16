// libs/oldscape/jagex3/js5/Js5LocalLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "Js5LocalLoader.h"

namespace jag::oldscape::jagex3 {
    // 0x100009e70: Js5LocalLoader::Shutdown() has the same machine code as AutoSingleton<ThreadPoolSingleton>::~AutoSingleton()

    // 0x100029ea0: Js5LocalLoader::GetIndexPercentage(Js5ArchiveId) const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100029ea0: Js5LocalLoader::GetGroupLoadPercentage(Js5ArchiveId, Js5GroupId) const has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x1002ba830
    unsigned long Js5LocalLoader::Initialize(const char** arg1, unsigned int arg2, const Filename& filename) {
        char* str;
        unsigned long in_RAX;
        eastl::string* this_00;

        unsigned long local_38 = in_RAX;
        field_8.set_max_size(22, 1);
        field_96 = filename;
        field_400.set_max_size((unsigned long)arg2, 1);
        if (arg2 != 22) {
            LogAssert("numNames == Js5ArchiveId::ID_LIMIT",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalLoader.cpp",
                      172, nullptr);
        }
        unsigned long arg1_00 = 0;
        do {
            str = arg1[arg1_00];
            if (str != nullptr) {
                this_00 = &field_400[arg1_00];
                eastl::string::assign(this_00, str);
            }
            arg1_00 = arg1_00 + 1;
        } while (arg1_00 != 22);
        new (&local_38) callstack::Callstack();
        return local_38 & 4294967295;
    }

    // 0x1002baa40
    uint64_t Js5LocalLoader::OpenJs5(Js5ArchiveId js5ArchiveId, bool arg2, bool arg3, bool arg4, bool arg5,
                                     Error* error) {
        fixed_string<char, _24>* str;
        eastl::string* str_00;
        Js5* pJVar3;
        Logger* pLVar4;
        char* pcVar5;
        uint8_t local_2a0[13];
        Js5ArchiveId local_290;
        ReturnValue local_288;
        uint32_t local_280;

        bool local_293 = arg2;
        bool local_292 = arg3;
        bool local_291 = arg5;
        local_290[0] = js5ArchiveId;
        Filename local_158;
        if (!(field_96.IsEmpty())) {
            str_00 = (eastl::string*)field_400[(unsigned long)local_290[0]];
            local_288 = field_96 / str_00;
            local_158 = local_288;
        } else {
            str = (fixed_string<char, _24>*)field_400[(unsigned long)local_290[0]];
            new (&local_288) Filename(str);
            local_158 = local_288;
        }
        make_shared<Js5LocalLoader::Js5Local, Js5LocalLoader&, Js5ArchiveId&, bool&, bool&, bool&>(
            &local_288, this, &local_290, &local_293, &local_292, &local_291);
        uint8_t* this_00 = &field_8;
        shared_ptr<Js5>* psVar2 = (shared_ptr<Js5>*)(*this_00)[(unsigned long)local_290[0]];
        psVar2->operator=(&local_288);
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_01 =
            (vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>*)(*this_00)[(unsigned long)local_290[0]];
        local_2a0._8_4_ = ((Js5Local*)this_01->end())->Open(local_158);
        if (error != nullptr) {
            error->m_code = local_2a0._8_4_;
        }
        if (!(((local_2a0 + 8))->IsValid())) {
            local_2a0._0_4_ = 255;
            local_2a0._4_4_ = local_290[0];
            local_280 = 0;
            local_288 = (ReturnValue)1;
            QueueGroupKey(*local_2a0, local_288);
        } else {
            psVar2 = (shared_ptr<Js5>*)(*this_00)[(unsigned long)local_290[0]];
            pJVar3 = (Js5*)(*psVar2).operator->();
            if (!(pJVar3->IsOptional())) {
                pLVar4 = logger::default_logger();
                pcVar5 = local_158.GetName();
                pLVar4->Log(false, 2,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                            "Js5LocalLoader.cpp",
                            212, "Could not open %s", pcVar5);
                psVar2 = (shared_ptr<Js5>*)(*this_00)[(unsigned long)local_290[0]];
                psVar2->reset();
            } else {
                pLVar4 = logger::default_logger();
                pcVar5 = local_158.GetName();
                pLVar4->Log(false, 3,
                            "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                            "Js5LocalLoader.cpp",
                            207, "Could not open optional JS5 %s", pcVar5);
                psVar2 = (shared_ptr<Js5>*)(*this_00)[(unsigned long)local_290[0]];
                pJVar3 = (Js5*)(*psVar2).operator->();
                pJVar3->LoadEmpty();
            }
        }
        uint64_t uVar6 = (*this_00)[(unsigned long)local_290[0]];
        return uVar6;
    }

    // 0x1002baf80
    void Js5LocalLoader::MainLogic() {
        unsigned int uVar1;
        unsigned int uVar2;
        Js5GroupId js5GroupId;
        unsigned int* puVar4;
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00;
        Js5Local* this_01;
        PacketJ<Array<unsigned char> _>* packetJ;
        ReturnValue local_48;
        list_map<Js5RequestKey, Js5RequestParameters>* local_38;

        list_map<Js5RequestKey, Js5RequestParameters>* this_02 =
            (list_map<Js5RequestKey, Js5RequestParameters>*)field_32;
        bool cVar3 = this_02->empty();
        if (!cVar3) {
            local_38 = this_02;
            do {
                puVar4 = (unsigned int*)this_02->front();
                uVar1 = *puVar4;
                uVar2 = puVar4[1];
                if (uVar1 != 255) {
                    uVar2 = uVar1;
                }
                this_00 = &field_8[(unsigned long)uVar2];
                this_01 = (Js5Local*)this_00->end();
                if (uVar1 == 255) {
                    this_01->LoadIndexDataFromFile();
                } else {
                    js5GroupId = puVar4[1];
                    make_shared<PacketJ<Array<unsigned char>>>(&local_48);
                    packetJ = (PacketJ<Array<unsigned char> _>*)*local_48;
                    this_01->LoadGroupDataFromFile(*packetJ, js5GroupId);
                    if ((puVar4[2] & 1) != 0) {
                        LogAssertAlways("/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/"
                                        "oldscape/jagex3/js5/Js5LocalLoader.cpp",
                                        255, "How did we get here, shouldn\'t blocking fetch have picked this up?");
                    }
                    this_02 = local_38;
                }
                this_02->pop_front();
                cVar3 = this_02->empty();
            } while (!cVar3);
        }
    }

    // 0x1002bb470
    uint8_t* Js5LocalLoader::BlockingFetch(const Js5RequestKey& js5RequestKey,
                                           const Js5RequestParameters& js5RequestParameters) {
        Js5GroupId js5GroupId;
        PacketJ<Array<unsigned char> _>* packetJ;
        uint8_t** ppuVar3;
        ReturnValue local_40;
        int local_30[2];

        unsigned int uVar1 = js5RequestKey.field_0;
        unsigned int uVar4 = uVar1;
        if (uVar1 == 255) {
            uVar4 = js5RequestKey.field_4;
        }
        if (((uint8_t)*js5RequestParameters & 1) == 0) {
            LogAssert("(params.m_priority & Js5FetchPriority::URGENT) != 0",
                      "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/libs/oldscape/jagex3/js5/"
                      "Js5LocalLoader.cpp",
                      268, nullptr);
        }
        vector<dash3d::EntityHighlight*, BucketAllocatorEASTL>* this_00 = &field_8[(unsigned long)uVar4];
        auto this_01 = this_00->end();
        new (local_30) callstack::Callstack();
        if (uVar1 == 255) {
            local_30[0] = this_01->LoadIndexDataFromFile();
        } else {
            js5GroupId = js5RequestKey.field_4;
            make_shared<PacketJ<Array<unsigned char>>>(&local_40);
            packetJ = (PacketJ<Array<unsigned char> _>*)*local_40;
            local_30[0] = this_01->LoadGroupDataFromFile(*packetJ, js5GroupId);
            if (!(local_30->IsValid())) {
                this_01->SetGroupData(js5GroupId, local_40);
            }
        }
        if (!(local_30->IsValid())) {
            ppuVar3 = &DataStatus::READY;
        } else {
            ppuVar3 = &DataStatus::MISSING;
        }
        return *ppuVar3;
    }

    // 0x1002bb590
    uint64_t Js5LocalLoader::GetGroupCountInCache(Js5ArchiveId js5ArchiveId) const {
        shared_ptr<Js5>* this_00;

        int iVar1 = field_8.end();
        uint64_t uVar2 = 0;
        if ((int)js5ArchiveId < iVar1) {
            this_00 = &field_8[(unsigned long)js5ArchiveId];
            uVar2 = ((Js5*)(*this_00).operator->())->GetGroupCount();
        }
        return uVar2;
    }

} // namespace jag::oldscape::jagex3

namespace jag {
    // 0x1002bad60
    shared_ptr_if_not_array<oldscape::jagex3::Js5LocalLoader::Js5Local>::type
    make_shared<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&,
                oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(oldscape::jagex3::Js5LocalLoader& js5LocalLoader,
                                                                      oldscape::jagex3::Js5ArchiveId& js5ArchiveId,
                                                                      bool& arg3, bool& arg4, bool& arg5) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_44;
        Js5Local* local_40[2];

        auto arg1 = aligned_alloc(776, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::jagex3::Js5LocalLoader::Js5Local>::type result;
        } else {
            local_40[0] = placement_new<oldscape::jagex3::Js5LocalLoader::Js5Local, oldscape::jagex3::Js5LocalLoader&,
                                        oldscape::jagex3::Js5ArchiveId&, bool&, bool&, bool&>(
                (void*)((long)arg1 + 32), js5LocalLoader, js5ArchiveId, arg3, arg4, arg5);
            local_44 = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::jagex3::Js5LocalLoader::Js5Local>, int,
                              oldscape::jagex3::Js5LocalLoader::Js5Local*&>(arg1, &local_44, local_40);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_40[0]);
        }
        return result;
    }

} // namespace jag
