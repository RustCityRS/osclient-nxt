// libs/hal/windowing/MenuItem.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag {
    class MenuItem {
    public:
        void GetChildren();
        void GetChildren() const;
        AuthSDKTokenResponse GetCommandIndex() const;
        MenuItem* FindByCommandID(unsigned int arg1) const;
        void AddChildMenuItems(NSMenu* nsMenu, unsigned int& arg2, MenuItem& menuItem, const Window& window);
        void AddSingleMenuItem(NSMenu* nsMenu, unsigned int& arg2, MenuItem& menuItem, const Window& window);
        void GetText() const;
        bool IsSubMenu() const;
        bool IsSeparator() const;
        bool IsEmpty() const;
        void SetCommandIndex(unsigned int arg1);
        void Setup(const Window& window);
        void Destroy(const Window& window);
        MenuItem();
        ~MenuItem();
        void Run() const;

    private:
        long field_0;
        long field_8;
        uint8_t _unknown_16[16];
        uint32_t m_commandIndex;
        uint8_t _unknown_36[92];
        uint64_t field_128;
    };

    // 0x1003a23d0
    void MenuItem::GetText() const {
        eastl::basic_string<char, BucketAllocatorEASTL>::begin();
    }

    // 0x1003a23e0
    bool MenuItem::IsSubMenu() const {
        return empty() ^ 1;
    }

    // 0x1003a23f0
    bool MenuItem::IsSeparator() const {
        uint64_t uVar2;

        if (empty() == '\0') {
            uVar2 = 0;
        } else {
            uVar2 = field_40.empty();
        }
        return uVar2;
    }

    // 0x1003a2420
    void MenuItem::SetCommandIndex(unsigned int arg1) {
        m_loopIterations = arg1;
    }

    // 0x1003a64b0
    void MenuItem::Run() const {
        if ((&field_80)->operator_cast_to_bool() != '\0') {
            std::function<void()>::operator()((function<void()>*)&field_80);
        }
    }

    // 0x1003a7150
    MenuItem::MenuItem() : eastl::vector<MenuItem>(), m_commandIndex(0), field_128(0) {}

    // 0x1003a72b0
    MenuItem::~MenuItem() {
        (*(void (*)(...))PTR__objc_release_100ee9e60)(field_128);
        field_80.~function();
        field_40.~basic_string();
    }

} // namespace jag
