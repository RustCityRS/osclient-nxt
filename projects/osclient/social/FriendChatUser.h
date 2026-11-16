// projects/osclient/social/FriendChatUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: osclient

namespace jag::oldscape::social {
    class FriendChatUser {
    public:
        void ResetFriendIndicator();
        void ResetIgnoreIndicator();
        ~FriendChatUser();
        FriendChatUser();
        bool IsFriend();
        bool IsIgnore();
        void RecalcIsFriend();
        void RecalcIsIgnore();

        // data members, from how the methods use this: 192 bytes
        undefined* field_0; // offset 0, vtable pointer
        char _unknown_8[128];
        undefined4 field_136; // offset 136
        char _unknown_140[40];
        uint field_180; // offset 180
        uint field_184; // offset 184
        char _unknown_188[4];
    };

    // 0x10012d080, 16 bytes, inline, placed by class name and debug map
    // FriendChatUser::ResetFriendIndicator()
    void FriendChatUser::ResetFriendIndicator() {
        field_180 = 0;
    }

    // 0x10012d140, 16 bytes, inline, placed by class name and debug map
    // FriendChatUser::ResetIgnoreIndicator()
    void FriendChatUser::ResetIgnoreIndicator() {
        field_184 = 0;
    }

    // 0x10012ea60, 16 bytes, complete-object destructor, inline, placed by class name
    // FriendChatUser::~FriendChatUser(): jumps straight to the base-object destructor

    // 0x10012ea70, 16 bytes, base-object destructor, inline, placed by class name
    // FriendChatUser::~FriendChatUser()
    void FriendChatUser::~FriendChatUser() {
        ~OnlinePlayerData();
    }

    // 0x100151300, 16 bytes, complete-object constructor, inline, placed by class name
    // FriendChatUser::FriendChatUser(): jumps straight to the base-object constructor

    // 0x100151320, 48 bytes, base-object constructor, inline, placed by class name
    // FriendChatUser::FriendChatUser()
    void FriendChatUser::FriendChatUser() {
        new (this) OnlinePlayerData<FriendChatUser>();
        field_0 = PTR_vtable_100ee8b18 + 16;
        field_180 = 0;
        field_184 = 0;
    }

    // 0x100161260, 48 bytes, inline, placed by class name
    // FriendChatUser::IsFriend()
    bool FriendChatUser::IsFriend() {
        if (field_180 == 0) {
            RecalcIsFriend(this);
        }
        return field_180 == 1;
    }

    // 0x100161290, 48 bytes, inline, placed by class name
    // FriendChatUser::IsIgnore()
    bool FriendChatUser::IsIgnore() {
        if (field_184 == 0) {
            RecalcIsIgnore(this);
        }
        return field_184 == 1;
    }

    // 0x10016ee80, 64 bytes, inline, placed by class name
    // FriendChatUser::RecalcIsFriend()
    void FriendChatUser::RecalcIsFriend() {
        byte bVar1;
        long lVar2;

        lVar2 = Client::Instance();
        lVar2 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(lVar2 + 52768));
        bVar1 = ((lVar2 + 8))->ContainsPlayerDisplayName((DisplayName*)&field_8);
        field_180 = 2 - bVar1;
    }

    // 0x10016eec0, 80 bytes, inline, placed by class name
    // FriendChatUser::RecalcIsIgnore()
    void FriendChatUser::RecalcIsIgnore() {
        byte bVar1;
        long lVar2;

        lVar2 = Client::Instance();
        lVar2 = std::unique_ptr<FriendSystem, std::default_delete<FriendSystem>>::operator->(
            (unique_ptr<FriendSystem, std::default_delete<FriendSystem>>*)(lVar2 + 52768));
        bVar1 = ((lVar2 + 208))->ContainsPlayerDisplayName((DisplayName*)&field_8);
        field_184 = 2 - bVar1;
    }

} // namespace jag::oldscape::social

namespace jag::game {
    // 0x10012d150: the linker folded this into oldscape::FoundObject::FoundObject(), which has identical code
    BuildFunctionRequestData::BuildFunctionRequestData();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    MapSquareStatus::~MapSquareStatus();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildModelResultData::~BuildModelResultData();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildAnimationResultData::~BuildAnimationResultData();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildFunctionRequestData::~BuildFunctionRequestData();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildSingleLocationResultData::~BuildSingleLocationResultData();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BuildCombinedLocationRequestData_PerModelData::~BuildCombinedLocationRequestData_PerModelData();

} // namespace jag::game

namespace jag::oldscape {
    // 0x10012d150, 16 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FoundObject::FoundObject()
    /* graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::OldscapeAnimCurveLoadJob()
    */

    void graphics::animation::OldscapeAnimKeyFrameSet::OldscapeAnimCurveLoadJob::OldscapeAnimCurveLoadJob() {
        _func_decltype_nullptr* in_RSI;

        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(in_RSI);
    }

    // 0x10012d160, 16 bytes, base-object destructor, inline, placed by debug map only (low confidence)
    // the linker folded identical functions into this address; Ghidra decompiled it under another of its names, so the signature below names that function
    // FoundObject::~FoundObject()
    /* LRUHashCacheWrapper<configdecoder::VarBitType, unsigned long
   long>::~LRUHashCacheWrapper() */

    void LRUHashCacheWrapper<configdecoder::VarBitType, unsigned long long>::~LRUHashCacheWrapper(
        LRUHashCacheWrapper<configdecoder::VarBitType, unsigned long long>* this, shared_ptr* param_1) {
        ~shared_ptr();
    }

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x10012d150: the linker folded this into oldscape::FoundObject::FoundObject(), which has identical code
    BindInfo::BindInfo();

    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    BindInfo::~BindInfo();

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x10012d160: the linker folded this into FoundObject::~FoundObject(), which has identical code
    OperationBuffer::~OperationBuffer();

    // 0x10012d160: the linker folded this into FoundObject::~FoundObject(), which has identical code
    ShareLightRequest::~ShareLightRequest();

} // namespace jag::oldscape::dash3d

namespace jag::tweak {
    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    Event::~Event();

} // namespace jag::tweak

namespace jag::render {
    // 0x10012d160: the linker folded this into oldscape::FoundObject::~FoundObject(), which has identical code
    KeepAliveSharedPtrAndOwner::~KeepAliveSharedPtrAndOwner();

} // namespace jag::render
