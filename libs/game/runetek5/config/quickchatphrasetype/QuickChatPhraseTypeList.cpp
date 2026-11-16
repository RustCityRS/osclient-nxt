// libs/game/runetek5/config/quickchatphrasetype/QuickChatPhraseTypeList.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.game.runetek5

namespace jag::game {
    class QuickChatPhraseTypeList {
    public:
        QuickChatPhraseTypeList(Array<eastl::vector<PacketT<Array<unsigned char>>>>& arg1);
        void LoadPhraseList();
        auto GetQuickChatPhraseType(unsigned int arg1);
        auto GetDynamicText(const QuickChatDynamicCommand* quickChatDynamicCommand, const eastl::vector<int>& arg2,
                            int arg3);
        ~QuickChatPhraseTypeList();

    private:
        unsigned int field_0;
        uint8_t _unknown_4[36];
        Array<eastl::vector<PacketT<Array<unsigned char>>>>* field_40;
        uint8_t _unknown_48[3352];
    };

    // 0x1004dcf70
    QuickChatPhraseTypeList::QuickChatPhraseTypeList(Array<eastl::vector<PacketT<Array<unsigned char>>>>& arg1)
        : field_0(0), field_40(arg1), field_48(64, "LRUCache") {}

    // 0x1004dd020
    void QuickChatPhraseTypeList::LoadPhraseList() {
        bool arg3;
        unsigned int uVar2;
        char* str;
        Js5NetQueueRequest* this_03;
        PhraseType* pPVar3;
        unsigned long arg1;
        shared_ptr local_88;
        PhraseType local_78;
        ReturnValue local_48;

        uint8_t* this_00 = &field_8;
        if (this_00->empty()) {
            uVar2 = ((vector<Nullable<Array<shared_ptr<oldscape::rs2lib::IfType>>>,
                             eastl::fixed_vector_allocator<32ul, 64ul, 8ul, 0ul, true>>*)(*field_40)[1])
                        ->size();
            field_0 = uVar2;
            this_00->resize((unsigned long)uVar2);
            if (field_0 != 0) {
                arg1 = 0;
                do {
                    uVar2 = (unsigned int)arg1;
                    GetQuickChatPhraseType((ReturnValue*)&local_88, this, uVar2);
                    if (!(shared_ptr::operator_cast_to_bool(&local_88))) {
                        local_78 = PhraseType(uVar2, "", false);
                        pPVar3 = (PhraseType*)(*this_00)[arg1];
                        *pPVar3 = local_78;
                    } else {
                        local_48 = ((QuickChatPhraseType*)local_88.operator->())->GetTextDisplay();
                        str = (char*)eastl::basic_string<char, BucketAllocatorEASTL>::begin();
                        this_03 = (Js5NetQueueRequest*)local_88.operator->();
                        arg3 = (bool)this_03->IsRequested();
                        local_78 = PhraseType(uVar2, str, arg3);
                        pPVar3 = (PhraseType*)(*this_00)[arg1];
                        *pPVar3 = local_78;
                    }
                    arg1 = arg1 + 1;
                } while (arg1 < field_0);
            }
        }
    }

    // 0x1004dd220
    auto QuickChatPhraseTypeList::GetQuickChatPhraseType(unsigned int arg1) {
        vector<PacketT<Array<unsigned char>>>* this_00;
        PacketJ<Array<unsigned char> _>* packetJ;
        uint8_t local_70[32];
        ReturnValue local_40;

        unsigned int local_2c = arg1;
        auto psVar2 = field_48.Find((unsigned long)arg1);
        new ((local_70 + 32)) shared_ptr(psVar2);
        if (((local_70 + 32))->operator_cast_to_bool() == '\0') {
            this_00 = (vector<PacketT<Array<unsigned char>>>*)(*field_40)[1];
            packetJ = (PacketJ<Array<unsigned char> _>*)(*this_00)[(unsigned long)local_2c];
            new (local_70) PacketT(packetJ);
            if (local_70->GetTextureAtlas() == 0) {
                auto result;
            } else {
                local_70->SetPos(0);
                make_shared<QuickChatPhraseType, unsigned int&, QuickChatPhraseTypeList&>(&local_40, &local_2c, this);
                ((QuickChatPhraseType*)local_40.operator->())->Decode(*local_70);
                psVar2 = (shared_ptr<oldscape::dash3d::GroundDecor>*)field_48.Put(local_40, 1, (unsigned long)local_2c);
                new (&result) shared_ptr(psVar2);
            }
        } else {
            result.shared_ptr<oldscape::FileRSevenDebugPresetProvider, void>(*((local_70 + 32)));
        }
        ((local_70 + 32))->~shared_ptr();
        return result;
    }

    // 0x1004dd690
    auto QuickChatPhraseTypeList::GetDynamicText(const QuickChatDynamicCommand* quickChatDynamicCommand,
                                                 const eastl::vector<int>& arg2, int arg3) {
        auto result;
        uint8_t local_34[4];

        if ((&field_3392)->operator_cast_to_bool() == '\0') {
            ToString<eastl::basic_string<char, BucketAllocatorEASTL>, int>(&result, (unsigned int)local_34);
        } else {
            std::function<eastl::basic_string<char, BucketAllocatorEASTL>(
                QuickChatDynamicCommand const*, eastl::vector<int> const&,
                int)>::operator()(&result,
                                  (function<eastl::basic_string<char, BucketAllocatorEASTL>(
                                       QuickChatDynamicCommand const*, eastl::vector<int> const&, int)>*)&field_3392,
                                  quickChatDynamicCommand, arg2, arg3);
        }
        return result;
    }

    // 0x10056f560
    QuickChatPhraseTypeList::~QuickChatPhraseTypeList() {
        field_3392.~function();
        field_48.~LRUCache();
        field_8.~vector();
    }

} // namespace jag::game
