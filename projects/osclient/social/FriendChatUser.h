// projects/osclient/social/FriendChatUser.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

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

    private:
        uint8_t _unknown_8[128];
        uint32_t field_136;
        uint8_t _unknown_140[40];
        unsigned int field_180;
        unsigned int field_184;
        uint8_t _unknown_188[4];
    };

    // 0x10012d080
    void FriendChatUser::ResetFriendIndicator() {
        field_180 = 0;
    }

    // 0x10012d140
    void FriendChatUser::ResetIgnoreIndicator() {
        field_184 = 0;
    }

    // 0x10012ea70
    FriendChatUser::~FriendChatUser() {}

    // 0x100151320
    FriendChatUser::FriendChatUser() : OnlinePlayerData<FriendChatUser>(), field_180(0), field_184(0) {}

    // 0x100161260
    bool FriendChatUser::IsFriend() {
        if (field_180 == 0) {
            RecalcIsFriend();
        }
        return field_180 == 1;
    }

    // 0x100161290
    bool FriendChatUser::IsIgnore() {
        if (field_184 == 0) {
            RecalcIsIgnore();
        }
        return field_184 == 1;
    }

    // 0x10016ee80
    void FriendChatUser::RecalcIsFriend() {
        long lVar3 = Client::Instance()->field_52768.operator->();
        uint8_t bVar1 = ((lVar3 + 8))->ContainsPlayerDisplayName(field_8);
        field_180 = 2 - bVar1;
    }

    // 0x10016eec0
    void FriendChatUser::RecalcIsIgnore() {
        long lVar3 = Client::Instance()->field_52768.operator->();
        uint8_t bVar1 = ((lVar3 + 208))->ContainsPlayerDisplayName(field_8);
        field_184 = 2 - bVar1;
    }

} // namespace jag::oldscape::social

namespace jag::game {
    // 0x10012d150: BuildFunctionRequestData::BuildFunctionRequestData() has the same machine code as oldscape::FoundObject::FoundObject()

    // 0x10012d160: MapSquareStatus::~MapSquareStatus() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x10012d160: BuildModelResultData::~BuildModelResultData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x10012d160: BuildAnimationResultData::~BuildAnimationResultData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x10012d160: BuildFunctionRequestData::~BuildFunctionRequestData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x10012d160: BuildSingleLocationResultData::~BuildSingleLocationResultData() has the same machine code as oldscape::FoundObject::~FoundObject()

    // 0x10012d160: BuildCombinedLocationRequestData_PerModelData::~BuildCombinedLocationRequestData_PerModelData() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::game

namespace jag::oldscape {
    // 0x10012d150
    FoundObject::FoundObject() : shared_ptr() {}

    // 0x10012d160
    FoundObject::~FoundObject() {}

} // namespace jag::oldscape

namespace jag::graphics {
    // 0x10012d150: BindInfo::BindInfo() has the same machine code as oldscape::FoundObject::FoundObject()

    // 0x10012d160: BindInfo::~BindInfo() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::graphics

namespace jag::oldscape::dash3d {
    // 0x10012d160: OperationBuffer::~OperationBuffer() has the same machine code as FoundObject::~FoundObject()

    // 0x10012d160: ShareLightRequest::~ShareLightRequest() has the same machine code as FoundObject::~FoundObject()

} // namespace jag::oldscape::dash3d

namespace jag::tweak {
    // 0x10012d160: Event::~Event() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::tweak

namespace jag::render {
    // 0x10012d160: KeepAliveSharedPtrAndOwner::~KeepAliveSharedPtrAndOwner() has the same machine code as oldscape::FoundObject::~FoundObject()

} // namespace jag::render
