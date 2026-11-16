// projects/osclient/TotpPassCodes.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: osclient

#include "TotpPassCodes.h"

namespace jag::oldscape {
    // 0x1000bfb60, 800 bytes, base-object constructor, placed by class name
    // TotpPassCodes::TotpPassCodes()
    void TotpPassCodes::TotpPassCodes() {
        char* pcVar1;
        bool bVar2;
        char cVar3;
        long lVar4;
        File* pFVar5;
        GameShell3Cache local_2c0;
        allocator local_2a0[8];
        undefined1 local_298[8];
        GameShell3Cache local_290[12];
        Filename local_160[19];
        long local_30;

        local_30 = *(long*)PTR____stack_chk_guard_100ee9d98;
        new (this) Filename();
        new (&field_304) eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                                           eastl::vector<eastl::pair<int, int>, eastl::allocator>>();
        field_344 = 1;
        new (local_298) callstack::Callstack();
        ((local_298 + 8))->GetRootStorage();
        local_2c0.GetPrefFilePostfix("_totp");
        Filename::operator/(local_160, (Filename*)(local_298 + 8), (fixed_string*)&local_2c0);
        Filename::operator=((Filename*)this, local_160);
        local_160->~pair();
        local_2c0.~basic_string();
        ((local_298 + 8))->~pair();
        lVar4 = Client::Instance();
        pcVar1 = *(char**)(*(long*)(lVar4 + 8440) + 24);
        new (&local_2c0) eastl::allocator("EASTL basic_string");
        new (local_160) eastl::string(pcVar1, (allocator*)&local_2c0);
        ((local_298 + 8))->OpenPrefsForRead(this, "_totp", local_160, local_298);
        local_160->~basic_string();
        bVar2 = std::operator!=((unique_ptr*)(local_298 + 8), (_func_decltype_nullptr*)(TotpPassCodes*)this);
        if (bVar2) {
            cVar3 = local_298->IsValid();
            if (cVar3 != '\0')
                goto LAB_1000bfca6;
            pFVar5 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator*(
                (unique_ptr<File, std::default_delete<File>>*)(local_298 + 8));
            cVar3 = InitFromFile(this, pFVar5);
            pFVar5 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)(local_298 + 8));
            pFVar5->close(0);
        LAB_1000bfdae:
            if (cVar3 != '\0')
                goto LAB_1000bfdbb;
        } else {
        LAB_1000bfca6:
            lVar4 = Client::Instance();
            pcVar1 = *(char**)(*(long*)(lVar4 + 8440) + 24);
            eastl::allocator::allocator(local_2a0, "EASTL basic_string");
            new (local_160) eastl::string(pcVar1, local_2a0);
            local_2c0.OpenPrefsForRead(this, "", local_160, local_298);
            std::unique_ptr<File, std::default_delete<File>>::operator=(
                (unique_ptr<File, std::default_delete<File>>*)(local_298 + 8), (unique_ptr*)&local_2c0);
            local_2c0.~unique_ptr();
            local_160->~basic_string();
            bVar2 = std::operator!=((unique_ptr*)(local_298 + 8), (_func_decltype_nullptr*)&local_2c0);
            if (bVar2) {
                cVar3 = local_298->IsValid();
                if (cVar3 == '\0') {
                    pFVar5 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator*(
                        (unique_ptr<File, std::default_delete<File>>*)(local_298 + 8));
                    cVar3 = InitFromLegacyFormat(this, pFVar5);
                    pFVar5 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                        (unique_ptr<File, std::default_delete<File>>*)(local_298 + 8));
                    pFVar5->close(0);
                    goto LAB_1000bfdae;
                }
            }
        }
        SaveToFile(this);
    LAB_1000bfdbb:
        ((local_298 + 8))->~unique_ptr();
        if (*(long*)PTR____stack_chk_guard_100ee9d98 != local_30) {
            /* WARNING: Subroutine does not return */
            ___stack_chk_fail();
        }
    }

    // 0x1000bfea0, 112 bytes, placed by class name
    // TotpPassCodes::InitFromFile(File&)
    undefined4 TotpPassCodes::InitFromFile(File* param_1) {
        bool bVar1;
        undefined4 uVar2;
        PacketJ* pPVar3;
        unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                   std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>
            local_20[8];

        LoadFile((TotpPassCodes*)local_20, param_1);
        bVar1 = local_20->operator_cast_to_bool();
        if (bVar1) {
            pPVar3 = (PacketJ*)
                std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::get(local_20);
            uVar2 = Deserialise(this, pPVar3);
        } else {
            uVar2 = 0;
        }
        std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                        std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::~unique_ptr(local_20);
        return uVar2;
    }

    // 0x1000bff70, 336 bytes, placed by class name
    // TotpPassCodes::InitFromLegacyFormat(File&)
    ulong TotpPassCodes::InitFromLegacyFormat(File* param_1) {
        bool bVar1;
        char cVar2;
        uint uVar3;
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar4;
        PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>* pPVar5;
        TotpPassCodes* this_00;
        ulong uVar6;
        int iVar7;
        undefined1 local_50[8];
        int local_48;
        int local_44;
        unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                   std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>
            local_40[15];
        char local_31;

        this_00 = (TotpPassCodes*)local_40;
        LoadFile(this_00, param_1);
        bVar1 = std::operator!=((unique_ptr*)this_00, (_func_decltype_nullptr*)param_1);
        if (bVar1) {
            pPVar4 = (PacketT<Array<unsigned char, eastl::allocator>>*)std::unique_ptr<
                         PacketJ<Array<unsigned char, eastl::allocator>>,
                         std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::operator->(local_40);
            cVar2 = pPVar4->IsValid();
            if (cVar2 != '\0') {
                pPVar5 =
                    (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)std::unique_ptr<
                        PacketJ<Array<unsigned char, eastl::allocator>>,
                        std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::operator->(local_40);
                local_31 = pPVar5->g1s();
                if ('\x02' < local_31) {
                    pPVar4 =
                        (PacketT<Array<unsigned char, eastl::allocator>>*)std::unique_ptr<
                            PacketJ<Array<unsigned char, eastl::allocator>>,
                            std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::operator->(local_40);
                    pPVar4->Skip(2);
                    pPVar5 =
                        (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)std::unique_ptr<
                            PacketJ<Array<unsigned char, eastl::allocator>>,
                            std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::operator->(local_40);
                    uVar3 = pPVar5->g1s();
                    this_00 = (TotpPassCodes*)(ulong)uVar3;
                    eastl::vector<eastl::pair<int, int>, eastl::allocator>::clear();
                    if ('\0' < (char)uVar3) {
                        iVar7 = (int)(char)uVar3;
                        this_00 = (TotpPassCodes*)local_50;
                        do {
                            pPVar5 =
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)std::unique_ptr<
                                    PacketJ<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::
                                operator->(local_40);
                            local_48 = pPVar5->g4s();
                            pPVar5 =
                                (PacketReaderMixin<PacketT<Array<unsigned char, eastl::allocator>>>*)std::unique_ptr<
                                    PacketJ<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::
                                operator->(local_40);
                            local_44 = pPVar5->g4s();
                            eastl::pair<int const, int>::pair<int const, int, void>((pair<int const, int>*)this_00,
                                                                                    &local_48, &local_44);
                            eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                                              eastl::vector<eastl::pair<int, int>, eastl::allocator>>::
                                insert<eastl::pair<int, int>, void>(
                                    (vector_map<int, int, eastl::less<int>, eastl::allocator,
                                                eastl::vector<eastl::pair<int, int>, eastl::allocator>>*)&field_304,
                                    (pair*)this_00);
                            iVar7 = iVar7 + -1;
                        } while (iVar7 != 0);
                    }
                }
                uVar6 = CONCAT71((int7)((ulong)this_00 >> 8), '\x02' < local_31);
                goto LAB_1000c0081;
            }
        }
        uVar6 = 0;
    LAB_1000c0081:
        std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                        std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::~unique_ptr(local_40);
        return uVar6 & 4294967295;
    }

    // 0x1000c00c0, 224 bytes, placed by class name
    // TotpPassCodes::SaveToFile()
    void TotpPassCodes::SaveToFile() {
        File* pFVar1;
        PacketT<Array<unsigned char, eastl::allocator>>* this_00;
        uchar* puVar2;
        TextureAtlasReference* this_01;
        char cVar3;
        uint uVar4;
        Callstack local_30;
        unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                   std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>
            local_20[8];

        new (&local_30) callstack::Callstack();
        local_30.field_8.OpenPrefsForWrite(this, (Error*)&local_30);
        cVar3 = local_30.IsValid();
        if (cVar3 == '\0') {
            Serialise((TotpPassCodes*)local_20);
            pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)&local_30.field_8);
            this_00 = (PacketT<Array<unsigned char, eastl::allocator>>*)std::unique_ptr<
                          PacketJ<Array<unsigned char, eastl::allocator>>,
                          std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::operator->(local_20);
            puVar2 = (uchar*)this_00->GetDataPtr();
            this_01 = (TextureAtlasReference*)std::unique_ptr<
                          PacketJ<Array<unsigned char, eastl::allocator>>,
                          std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::operator->(local_20);
            uVar4 = this_01->GetTextureAtlas();
            pFVar1->write(puVar2, uVar4, 0);
            pFVar1 = (File*)std::unique_ptr<File, std::default_delete<File>>::operator->(
                (unique_ptr<File, std::default_delete<File>>*)&local_30.field_8);
            pFVar1->close(0);
            std::unique_ptr<
                PacketJ<Array<unsigned char, eastl::allocator>>,
                std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::~unique_ptr(local_20);
        }
        local_30.field_8.~unique_ptr();
    }

    // 0x1000c01b0, 16 bytes, complete-object constructor, placed by class name
    // TotpPassCodes::TotpPassCodes(): jumps straight to the base-object constructor

    // 0x1000c01c0, 32 bytes, placed by class name
    // TotpPassCodes::MainLogic()
    void TotpPassCodes::MainLogic() {
        if (field_344 != '\0') {
            field_344 = 0;
            SaveToFile(this);
        }
    }

    // 0x1000c01e0, 240 bytes, placed by class name
    // TotpPassCodes::LoadFile(File&)
    TotpPassCodes* TotpPassCodes::LoadFile(File* param_1) {
        ulong uVar2;
        long lVar3;
        ulong uVar4;
        allocator local_70[8];
        vector<unsigned char, eastl::allocator> local_68[32];
        undefined1 local_40[16];

        local_40._8_8_ = this;
        new (local_40) callstack::Callstack();
        uVar4 = 0;
        uVar2 = param_1->length(0);
        eastl::allocator::allocator(local_70, "EASTL vector");
        eastl::vector<unsigned char, eastl::allocator>::vector(local_68, uVar2, local_70);
        do {
            if (uVar2 <= uVar4) {
                std::make_unique<PacketJ<Array<unsigned char, eastl::allocator>>,
                                 eastl::vector<unsigned char, eastl::allocator>&>((vector*)local_40._8_8_);
            LAB_1000c0294:
                eastl::vector<unsigned char, eastl::allocator>::~vector(local_68);
                return (TotpPassCodes*)local_40._8_8_;
            }
            lVar3 = param_1->read(local_68, (int)uVar2 - (uint)uVar4, (uint)uVar4, local_40);
            if (local_40->IsValid() != '\0') {
                std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::unique_ptr<true,
                                                                                                                  void>(
                    (_func_decltype_nullptr*)local_40._8_8_);
                goto LAB_1000c0294;
            }
            uVar4 = uVar4 + lVar3;
        } while (true);
    }

    // 0x1000c02f0, 352 bytes, placed by class name
    // TotpPassCodes::Deserialise(PacketJ<Array<unsigned char, eastl::allocator> >*)
    undefined4 TotpPassCodes::Deserialise(PacketJ* param_1) {
        char cVar1;
        undefined8 uVar2;
        undefined4 uVar3;
        int iVar4;
        vector_map<int, int, eastl::less<int>, eastl::allocator, eastl::vector<eastl::pair<int, int>, eastl::allocator>>
            local_78[40];
        pair<int, int> local_50[8];
        TotpPassCodes* local_48;
        int local_3c;
        int local_38;
        undefined4 local_34;

        local_48 = this;
        cVar1 = param_1->IsValid();
        if (cVar1 == '\0') {
            uVar2 = logger::default_logger();
            uVar3 = 0;
            logger::Logger::Log(
                uVar2, 0, 3,
                "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/osclient/TotpPassCodes.cpp",
                152, "Invalid packet passed in.  Creating default");
        } else {
            eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, int>, eastl::allocator>>::vector_map(local_78);
            uVar2 = param_1->g1s();
            cVar1 = (char)uVar2;
            local_34 = (undefined4)CONCAT71((int7)((ulong)uVar2 >> 8), cVar1 == '\x01');
            if (cVar1 == '\x01') {
                cVar1 = param_1->g1s();
                if ('\0' < cVar1) {
                    iVar4 = (int)cVar1;
                    do {
                        local_3c = param_1->g4s();
                        local_38 = param_1->g4s();
                        eastl::pair<int, int>::pair<int, int&, void>(local_50, &local_3c, &local_38);
                        eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                                          eastl::vector<eastl::pair<int, int>, eastl::allocator>>::
                            insert<eastl::pair<int, int>, void>(local_78, (pair*)local_50);
                        iVar4 = iVar4 + -1;
                    } while (iVar4 != 0);
                }
                eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                                  eastl::vector<eastl::pair<int, int>, eastl::allocator>>::
                operator=((vector_map<int, int, eastl::less<int>, eastl::allocator,
                                      eastl::vector<eastl::pair<int, int>, eastl::allocator>>*)&local_48->field_304,
                          (vector_map*)local_78);
            } else {
                uVar2 = logger::default_logger();
                logger::Logger::Log(uVar2, 0, 3,
                                    "/Users/bamboo/bamboo-home-01/xml-data/build-dir/OSRS-OS1669-BOXR/projects/"
                                    "osclient/TotpPassCodes.cpp",
                                    161, "Invalid version found, expected %d got %d", 1, (int)cVar1);
            }
            eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, int>, eastl::allocator>>::~vector_map(local_78);
            uVar3 = local_34;
        }
        return uVar3;
    }

    // 0x1000c05d0, 176 bytes, placed by class name
    // TotpPassCodes::PutTotpPassCode(int, int)
    void TotpPassCodes::PutTotpPassCode(int param_1, int param_2) {
        undefined1* this_00;
        pair* ppVar1;
        pair* ppVar2;
        ulong uVar3;
        pair<int, int> local_30[8];
        int local_28;
        int local_24;

        if (param_1 != 0) {
            this_00 = &field_304;
            local_28 = param_2;
            local_24 = param_1;
            ppVar1 = (pair*)this_00->find(&local_24);
            ppVar2 = (pair*)this_00->end();
            if (ppVar1 == ppVar2) {
                uVar3 = this_00->size();
                if (99 < uVar3) {
                    ppVar1 = (pair*)this_00->HeapBeginPtr();
                    this_00->erase(ppVar1);
                    field_344 = 1;
                }
            } else {
                this_00->erase(ppVar1);
            }
            eastl::pair<int, int>::pair<int, int&, void>(local_30, &local_24, &local_28);
            eastl::vector_map<int, int, eastl::less<int>, eastl::allocator,
                              eastl::vector<eastl::pair<int, int>, eastl::allocator>>::insert<eastl::pair<int, int>,
                                                                                              void>(
                (vector_map<int, int, eastl::less<int>, eastl::allocator,
                            eastl::vector<eastl::pair<int, int>, eastl::allocator>>*)this_00,
                (pair*)local_30);
            field_344 = 1;
        }
    }

    // 0x1000c06c0, 80 bytes, placed by class name
    // TotpPassCodes::GetTotpPassCode(int) const
    undefined4 TotpPassCodes::GetTotpPassCode(int param_1) {
        undefined4 uVar1;
        long lVar2;
        long lVar3;
        int local_1c;

        local_1c = param_1;
        lVar2 = (&field_304, &local_1c)->find();
        lVar3 = (&field_304)->end();
        if (lVar2 == lVar3) {
            uVar1 = 0;
        } else {
            uVar1 = *(undefined4*)(lVar2 + 4);
        }
        return uVar1;
    }

    // 0x1000c0710, 224 bytes, placed by class name
    // TotpPassCodes::Serialise() const
    TotpPassCodes* TotpPassCodes::Serialise() {
        PacketT<Array<unsigned char, eastl::allocator>>* pPVar1;
        ulong uVar2;
        int* piVar3;
        int* piVar4;
        long in_RSI;
        vector<eastl::pair<int, int>, eastl::allocator>* this_00;

        std::make_unique<PacketJ<Array<unsigned char, eastl::allocator>>,
                         PacketT<Array<unsigned char, eastl::allocator>>::PacketConstants>((PacketConstants*)this);
        pPVar1 =
            (PacketT<Array<unsigned char, eastl::allocator>>*)
                std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::
                operator->((unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                       std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>*)this);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, 1);
        pPVar1 =
            (PacketT<Array<unsigned char, eastl::allocator>>*)
                std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::
                operator->((unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                       std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>*)this);
        this_00 = (vector<eastl::pair<int, int>, eastl::allocator>*)(in_RSI + 304);
        uVar2 = eastl::vector<eastl::pair<int, int>, eastl::allocator>::size(this_00);
        PacketT<Array<unsigned char, eastl::allocator>>::p1<unsigned long>(pPVar1, uVar2);
        piVar3 = (int*)this_00->HeapBeginPtr();
        piVar4 = (int*)this_00->end();
        for (; piVar3 != piVar4; piVar3 = piVar3 + 2) {
            pPVar1 =
                (PacketT<Array<unsigned char, eastl::allocator>>*)
                    std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::
                    operator->((unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                           std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar1, *piVar3);
            pPVar1 =
                (PacketT<Array<unsigned char, eastl::allocator>>*)
                    std::unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                    std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>::
                    operator->((unique_ptr<PacketJ<Array<unsigned char, eastl::allocator>>,
                                           std::default_delete<PacketJ<Array<unsigned char, eastl::allocator>>>>*)this);
            PacketT<Array<unsigned char, eastl::allocator>>::p4<int>(pPVar1, piVar3[1]);
        }
        return this;
    }

} // namespace jag::oldscape
