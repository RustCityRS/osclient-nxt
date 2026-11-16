// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhraseTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.game.runetek5

namespace jag::game {
    class QuickChatPhraseTypeList {
    public:
        QuickChatPhraseTypeList(
            Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>&);
        void LoadPhraseList();
        GetQuickChatPhraseType(unsigned int);
        QuickChatDynamicCommand* GetDynamicText(QuickChatDynamicCommand const*,
                                                eastl::vector<int, eastl::allocator> const&, int);
        ~QuickChatPhraseTypeList();

        // data members, from how the methods use this: 3400 bytes
        uint field_0; // offset 0
        char _unknown_4[36];
        Array* field_40; // offset 40
        char _unknown_48[3352];
    };

    // 0x1004dcf70, 112 bytes, base-object constructor, placed by class name and debug map
    // QuickChatPhraseTypeList::QuickChatPhraseTypeList(Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>&)
    void QuickChatPhraseTypeList::QuickChatPhraseTypeList(Array* param_1) {
        field_0 = 0;
        new (&field_8) eastl::vector<PhraseType, eastl::allocator>();
        field_40 = param_1;
        new (&field_48, 64, "LRUCache") LRUCache<QuickChatPhraseType>();
        std::function<eastl::basic_string<char, BucketAllocatorEASTL>(
            QuickChatDynamicCommand_const*, eastl::vector<int, eastl::allocator> const&, int)>::
            function(
                (function<eastl::basic_string<char, BucketAllocatorEASTL>(
                     QuickChatDynamicCommand_const*, eastl::vector<int, eastl::allocator> const&, int)>*)&field_3392);
    }

    // 0x1004dd010, 16 bytes, complete-object constructor, placed by class name and debug map
    // QuickChatPhraseTypeList::QuickChatPhraseTypeList(Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator> >, eastl::allocator>, eastl::allocator>&): jumps straight to the base-object constructor

    // 0x1004dd020, 416 bytes, placed by class name and debug map
    // QuickChatPhraseTypeList::LoadPhraseList()
    void QuickChatPhraseTypeList::LoadPhraseList() {
        undefined1* this_00;
        char cVar1;
        bool bVar2;
        uint uVar3;
        vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
               eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>* this_01;
        char* pcVar4;
        Js5NetQueueRequest* this_02;
        PhraseType* pPVar5;
        ulong uVar6;
        undefined1 local_88[16];
        PhraseType local_78;
        basic_string<char, BucketAllocatorEASTL> local_48[24];

        this_00 = &field_8;
        cVar1 = this_00->empty();
        if (cVar1 != '\0') {
            this_01 = (vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                              eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>*)
                Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                      eastl::allocator>::
                operator[]((Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                                  eastl::allocator>*)field_40,
                           1);
            uVar3 = eastl::vector<
                Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>, eastl::allocator>>,
                eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true, eastl::allocator>>::size(this_01);
            field_0 = uVar3;
            this_00->resize((ulong)uVar3);
            if (field_0 != 0) {
                uVar6 = 0;
                do {
                    GetQuickChatPhraseType((QuickChatPhraseTypeList*)local_88, (uint)this);
                    bVar2 = local_88->operator_cast_to_bool();
                    if (bVar2) {
                        shared_ptr<QuickChatPhraseType>::operator->((shared_ptr<QuickChatPhraseType>*)local_88);
                        local_48->GetTextDisplay();
                        pcVar4 = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_02 = (Js5NetQueueRequest*)shared_ptr<QuickChatPhraseType>::operator->(
                            (shared_ptr<QuickChatPhraseType>*)local_88);
                        bVar2 = (bool)this_02->IsRequested();
                        new (&local_78) PhraseType((int)uVar6, pcVar4, bVar2);
                        pPVar5 = (PhraseType*)eastl::vector<PhraseType, eastl::allocator>::operator[](
                            (vector<PhraseType, eastl::allocator>*)this_00, uVar6);
                        PhraseType::operator=(pPVar5, &local_78);
                        local_78.~LanguageMessage();
                        eastl::basic_string<char, BucketAllocatorEASTL>::~basic_string(local_48);
                    } else {
                        new (&local_78) PhraseType((int)uVar6, "", false);
                        pPVar5 = (PhraseType*)eastl::vector<PhraseType, eastl::allocator>::operator[](
                            (vector<PhraseType, eastl::allocator>*)this_00, uVar6);
                        PhraseType::operator=(pPVar5, &local_78);
                        local_78.~LanguageMessage();
                    }
                    local_88->~shared_ptr();
                    uVar6 = uVar6 + 1;
                } while (uVar6 < field_0);
            }
        }
    }

    // 0x1004dd220, 320 bytes, placed by class name and debug map
    // QuickChatPhraseTypeList::GetQuickChatPhraseType(unsigned int)
    QuickChatPhraseTypeList* QuickChatPhraseTypeList::GetQuickChatPhraseType(uint param_1) {
        shared_ptr* psVar2;
        vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>* this_00;
        PacketT* pPVar3;
        QuickChatPhraseType* this_01;
        uint in_EDX;
        undefined4 in_register_00000034;
        QuickChatPhraseTypeList* pQVar5;
        undefined1 local_70[32];
        shared_ptr local_40;
        uint local_2c;

        pQVar5 = (QuickChatPhraseTypeList*)CONCAT44(in_register_00000034, param_1);
        local_2c = in_EDX;
        psVar2 = (shared_ptr*)(&pQVar5->field_48, (ulong)in_EDX)->Find();
        new ((local_70 + 32)) shared_ptr<oldscape::dash3d::Decor>(psVar2);
        if (((local_70 + 32))->operator_cast_to_bool()) {
            shared_ptr<oldscape::RSevenDebugPresetProvider>::shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(
                (shared_ptr<oldscape::RSevenDebugPresetProvider>*)this, (shared_ptr*)(local_70 + 32));
        } else {
            this_00 = (vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>*)Array<
                eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>, eastl::allocator>::
            operator[]((Array<eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>,
                              eastl::allocator>*)pQVar5->field_40,
                       1);
            pPVar3 =
                (PacketT*)eastl::vector<PacketT<Array<unsigned char, eastl::allocator>>, eastl::allocator>::operator[](
                    this_00, (ulong)local_2c);
            new (local_70) PacketT<Array<unsigned char, eastl::allocator>>(pPVar3);
            if (local_70->GetTextureAtlas() == 0) {
                new (this) shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>(0);
            } else {
                local_70->SetPos(0);
                make_shared<QuickChatPhraseType, unsigned int&, QuickChatPhraseTypeList&>((jag*)&local_40, &local_2c,
                                                                                          pQVar5);
                this_01 = (QuickChatPhraseType*)shared_ptr<QuickChatPhraseType>::operator->(
                    (shared_ptr<QuickChatPhraseType>*)&local_40);
                this_01->Decode(local_70);
                psVar2 = (shared_ptr*)(&pQVar5->field_48, &local_40, 1, (ulong)local_2c)->Put();
                new (this) shared_ptr<oldscape::dash3d::Decor>(psVar2);
                local_40.~shared_ptr();
            }
            local_70->~VBOMapper();
        }
        ((local_70 + 32))->~shared_ptr();
        return this;
    }

    // 0x1004dd690, 112 bytes, placed by class name
    // QuickChatPhraseTypeList::GetDynamicText(QuickChatDynamicCommand const*, eastl::vector<int, eastl::allocator> const&, int)
    QuickChatDynamicCommand* QuickChatPhraseTypeList::GetDynamicText(QuickChatDynamicCommand* param_1, vector* param_2,
                                                                     int param_3) {
        int local_34;

        if (((param_2 + 3392))->operator_cast_to_bool()) {
            std::function<eastl::basic_string<char, BucketAllocatorEASTL>(
                QuickChatDynamicCommand_const*, eastl::vector<int, eastl::allocator> const&, int)>::operator()(param_1,
                                                                                                               param_2 +
                                                                                                                   3392,
                                                                                                               param_3);
        } else {
            ToString<eastl::basic_string<char, BucketAllocatorEASTL>, int>((jag*)param_1, &local_34, 10);
        }
        return param_1;
    }

    // 0x10056f550, 16 bytes, complete-object destructor, inline, placed by class name
    // QuickChatPhraseTypeList::~QuickChatPhraseTypeList(): jumps straight to the base-object destructor

    // 0x10056f560, 64 bytes, base-object destructor, inline, placed by class name
    // QuickChatPhraseTypeList::~QuickChatPhraseTypeList()
    void QuickChatPhraseTypeList::~QuickChatPhraseTypeList() {
        std::function<eastl::basic_string<char, BucketAllocatorEASTL>(
            QuickChatDynamicCommand_const*, eastl::vector<int, eastl::allocator> const&, int)>::
            ~function(
                (function<eastl::basic_string<char, BucketAllocatorEASTL>(
                     QuickChatDynamicCommand_const*, eastl::vector<int, eastl::allocator> const&, int)>*)&field_3392);
        (&field_48)->~LRUCache();
        (&field_8)->~vector();
    }

} // namespace jag::game
