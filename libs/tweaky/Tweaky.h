// libs/tweaky/Tweaky.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::tweak {
    class Event {
    public:
        ~Event();
        Event(Event&& arg1);
        Event(const shared_ptr<Control>& control, Name name);
        Event(const Event& event);

    private:
        uint8_t _unknown_0[16];
        Name field_16;
        uint8_t _unknown_20[4];
    };

    class Tweaky {
    public:
        shared_ptr GetFont() const;
        int GetPlacement() const;
        shared_ptr GetRoot() const;
        RT7Core* GetRT7Core() const;
        FontHelpers* GetFontHelper() const;
        auto GetFocus() const;
        Tweaky(graphics::RT7Core* rt7Core, graphics::FontHelpers* fontHelpers, input::Input* input);
        ~Tweaky();
        void AddGlobalControls();
        void AddButton(const char* str, std::function<void(Event const&)> const& callback);
        void Add(const shared_ptr<Control>& control);
        void AddCheckBox(const char* str, bool& arg2);
        void AddCheckBox(const char* str, std::function<void(Event const&)> const& callback);
        void AddEditField(const char* str, int arg2, std::function<void(Event const&)> const& callback);
        void AddEnum(const char* str, const StringEnum* stringEnum, int* arg3);
        void AddEnum(const char* str, const StringEnum* stringEnum, int* arg3,
                     std::function<void(Event const&)> const& callback);
        void AddSlider(const char* str, float arg2, float arg3, float arg4, int* arg5);
        void AddSlider(const char* str, float arg2, float arg3, float arg4, unsigned int* arg5);
        void AddSlider(const char* str, float arg2, float arg3, float arg4, float* arg5);
        void AddSlider(const char* str, float arg2, float arg3, float arg4,
                       std::function<void(Event const&)> const& callback);
        void AddSwatch(float* arg1, float* arg2, float* arg3);
        void AddSwatch(float* arg1, float* arg2, float* arg3, float* arg4);
        auto AddGroup(const char* str);
        void Draw(int arg1, int arg2, int arg3, int arg4);
        void DetectTweakyShown();
        int GetVisibleX() const;
        int GetVisibleY() const;
        bool IsAttached();
        void DrawScrollBar(Placement placement, bool arg2, int arg3, int arg4, int arg5, bool arg6);
        void Clear();
        void DrawLine(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void DrawRect(int arg1, int arg2, int arg3, int arg4, bool arg5);
        void FillRect(int arg1, int arg2, int arg3, int arg4);
        void GetSize(int& arg1, int& arg2) const;
        char GetTextSize(int& arg1, int& arg2, StringView stringView, int arg4);
        unsigned int GetMinControlHeight();
        int GetTextCenterYOffset(unsigned int arg1);
        uint64_t HandleMouseDown(float arg1, float arg2);
        void IsInsideVisibleArea(int arg1, int arg2) const;
        void ClearFocus();
        unsigned long HandleMouseMove(float arg1, float arg2);
        uint64_t HandleMouseOver(float arg1, float arg2);
        uint64_t HandleMouseUp(float arg1, float arg2);
        uint32_t HandleMouseWheel(float arg1, float arg2, float arg3);
        void ValidateScroll();
        bool HasInputFocus() const;
        void SetFont(const shared_ptr<graphics::Font>& font);
        void SetControlMinHeight(unsigned int arg1);
        void ToggleControlMinHeight();
        void SetFocus(const shared_ptr<Control>& control);
        void EnsureVisible(const shared_ptr<Control>& control);
        void SetFocusNext();
        void SetFocusPrevious();
        uint32_t HandleChar(int arg1);
        uint32_t HandleKeyDown(int arg1);
        uint32_t HandleKeyUp(int arg1);
        void TextDraw<eastl::fixed_string<char, 16>>(int arg1, int arg2, const eastl::fixed_string<char, 16>& str,
                                                     int arg4, int arg5, bool arg6);
        void SetColour(unsigned int arg1);
        void GetScroll(int& arg1, int& arg2) const;
        void TextDraw(int arg1, int arg2, const char* str, int arg4, int arg5, bool arg6);
        void GetTextSize(int& arg1, int& arg2, const char* str, unsigned long arg4, int arg5);
        void SetVisibleArea(int arg1, int arg2);
        void TextDraw<std::basic_string_view<char>>(int arg1, int arg2, const std::basic_string_view<char>& str,
                                                    int arg4, int arg5, bool arg6);
        bool IsMinimised();
        void SetMinimised(bool arg1);
        void SetAttached(bool arg1);
        static int32_t m_controlMinHeight; // = 15
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>
            NullTweaky; // = shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata>()

    private:
        uint8_t _unknown_0[16];
        shared_ptr m_root;
        uint8_t _unknown_32[16];
        RT7Core* m_pRT7Core;
        FontHelpers* m_pFontHelper;
        shared_ptr m_font;
        unsigned int field_80;
        uint8_t _unknown_84[4];
        Input* field_88;
        uint64_t field_96;
        int m_placement;
        int field_108;
        int field_112;
        int field_116;
        uint8_t field_120;
        uint8_t _unknown_121[3];
        float field_124;
        float field_128;
        int field_132;
        int field_136;
        int m_visibleX;
        int m_visibleY;
        unsigned int m_colour;
        uint8_t _unknown_152[5];
        bool m_attached;
        bool m_minimised;
        char field_159;
        uint8_t _unknown_160[4];
    };

    // 0x100912bb0
    Event::Event(const shared_ptr<Control>& control, Event::Name name) : shared_ptr(control), field_16(name) {}

    // 0x100a3cda0
    int Tweaky::GetVisibleX() const {
        if (m_visibleX == -1) {
            return field_112 - m_placement;
        }
        return m_visibleX;
    }

    // 0x100a3cdc0
    int Tweaky::GetVisibleY() const {
        if (m_visibleY == -1) {
            return field_116 - field_108;
        }
        return m_visibleY;
    }

    // 0x100a3cde0
    bool Tweaky::IsAttached() {
        return m_attached;
    }

    // 0x100a3d500
    void Tweaky::IsInsideVisibleArea(int arg1, int arg2) const {
        int arg1_00 = m_placement;
        int arg2_00 = field_108;
        local_48._16_4_ = arg2;
        int iVar2 = GetVisibleX();
        int iVar1 = field_108;
        int iVar3 = GetVisibleY();
        GridRect local_48(arg1_00, arg2_00, iVar2 + arg1_00, iVar1 + iVar3);
        local_48.IsInside(arg1, local_48._16_4_);
    }

    // 0x100a3fa10
    void Tweaky::TextDraw<eastl::fixed_string<char, 16>>(int arg1, int arg2, const eastl::fixed_string<char, 16>& str,
                                                         int arg4, int arg5, bool arg6) {
        uint32_t in_register_0000000c;
        uint32_t in_register_0000003c;
        uint64_t in_register_00000089;
        bool in_stack_00000008;
        StringView local_a0;
        StringView local_90;

        long lVar1 = (((uint64_t)in_register_0000003c << 32) | (uint32_t)arg1);
        basic_string<char, BucketAllocatorEASTL>* local_50 =
            (basic_string<char, BucketAllocatorEASTL>*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4);
        int local_44 = (int)(((uint64_t)in_register_00000089 << 8) | (uint8_t)arg6);
        TextFlags local_38(1, in_stack_00000008);
        TextProperties local_80(*((lVar1 + 64)), local_38[0]);
        local_80.SetAlignment(0, 0);
        unsigned int arg1_00 = *(unsigned int*)(lVar1 + 148);
        optional<unsigned int> local_58(*((lVar1 + 152)));
        local_80.SetColours(arg1_00, &local_58);
        FontHelpers* fontHelpers = *(FontHelpers**)(lVar1 + 56);
        if (arg5 < 1) {
            local_90.StringView<eastl::fixed_string<char, 40>>(*local_50);
            fontHelpers->DrawString(&local_90, arg2 - *(int*)(lVar1 + 136),
                                    (int)str - (*(int*)(lVar1 + 132) + *(int*)(lVar1 + 80)), 512, local_80);
        } else {
            local_a0.StringView<eastl::fixed_string<char, 40>>(*local_50);
            fontHelpers->DrawStringMultiline(&local_a0, arg2 - *(int*)(lVar1 + 136),
                                             (int)str - (*(int*)(lVar1 + 132) + *(int*)(lVar1 + 80)), arg5, local_44,
                                             nullptr, local_80);
        }
    }

    // 0x100a423d0
    void Tweaky::SetColour(unsigned int arg1) {
        m_colour = arg1;
    }

    // 0x100a46f20
    void Tweaky::GetScroll(int& arg1, int& arg2) const {
        arg1 = field_136;
        arg2 = field_132;
    }

    // 0x100a47c00
    void Tweaky::TextDraw(int arg1, int arg2, const char* str, int arg4, int arg5, bool arg6) {
        uint32_t in_register_0000000c;
        basic_string_view<char> local_40;

        if ((char*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4) != nullptr) {
            local_40 = std::basic_string_view<char>((char*)(((uint64_t)in_register_0000000c << 32) | (uint32_t)arg4));
            TextDraw<std::basic_string_view<char>>(
                arg1, arg2, (basic_string_view<char, std::char_traits<char> _>*)((unsigned long)str & 4294967295),
                (int)&local_40, arg5, arg6);
        }
    }

    // 0x100a49350
    void Tweaky::GetTextSize(int& arg1, int& arg2, const char* str, unsigned long arg4, int arg5) {

        StringView local_40(str, arg4);
        GetTextSize(arg1, arg2, &local_40, arg5);
    }

} // namespace jag::tweak

namespace jag::fixedfunction {
    // 0x1009149a0
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
        lambda(render::RenderContext&) #1
    }
    , void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
          lambda(render::RenderContext&) #1
      } && arg1) {
        *(uint64_t*)this = 0;
        uint64_t uVar1 = *(uint64_t*)(arg1 + 8);
        *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
        *(uint64_t*)(this + 24) = uVar1;
        *(void (**)(...))(this + 144) =
            function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&)
                           const ::{
            lambda(void*, void*) #1
        }
        (render::RenderContext&)#1
    },void>((tweak::Container&)->RegisterTweakyVars()::$_8::operator()(tweak::Event const&)const::{
        lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(void (**)(...))this =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_8::operator()(tweak::Event const&)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(void (**)(...))(this + 152) =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_8::operator()(tweak::Event const&)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x1009149e0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()((_lambda_void__void___1_*)this, arg1, arg2);
}

// 0x1009149f0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    uint64_t uVar1 = *(uint64_t*)(this + 8);
    *(uint64_t*)arg1 = *(uint64_t*)this;
    *(uint64_t*)((long)arg1 + 8) = uVar1;
}

// 0x100914a00
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()((_lambda_void__jag__render__RenderContext___1_*)this, arg1, renderContext);
}

// 0x100914a10
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()((_lambda_jag__render__RenderContext___1_*)this, arg1);
}

// 0x100914a40
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

// 0x100916730
function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
      lambda(render::RenderContext&) #1
  } && arg1) {
    *(uint64_t*)this = 0;
    *(uint64_t*)(this + 16) = *(uint64_t*)arg1;
    *(void (**)(...))(this + 144) = function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(
                                                   tweak::Event const&) const ::{
        lambda(void*, void*) #1
    }
    (render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_11::operator()(tweak::Event const&)const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(void (**)(...))this =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_11::operator()(tweak::Event const&)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(void (**)(...))(this + 152) =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_11::operator()(tweak::Event const&)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x100916770
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::__invoke(void* arg1, void* arg2) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()((_lambda_void__void___1_*)this, arg1, arg2);
}

// 0x100916780
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* arg1, void* arg2) const {
    *(uint64_t*)arg1 = *(uint64_t*)this;
}

// 0x100916790
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::__invoke(void* arg1, render::RenderContext& renderContext) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()((_lambda_void__jag__render__RenderContext___1_*)this, arg1, renderContext);
}

// 0x1009167a0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* arg1, render::RenderContext & renderContext) const {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()((_lambda_jag__render__RenderContext___1_*)this, arg1);
}

// 0x1009167c0
void function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*) #1
}
::__invoke(void* arg1) {}

} // namespace jag::fixedfunction

namespace jag {
    // 0x100913890
    float Bytes2Kilobytes<unsigned long long>(unsigned long long arg1) {
        return (float)arg1 * 0.0009765625f;
    }

} // namespace jag
