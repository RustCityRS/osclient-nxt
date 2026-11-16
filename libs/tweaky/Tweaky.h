// libs/tweaky/Tweaky.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::fixedfunction {
    // 0x100914990, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&): jumps straight to the base-object constructor

    // 0x1009149a0, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)
    /* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1},
   void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1}&&) */

    void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::operator()(
        function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
        _lambda_jag__render__RenderContext___1_* param_1) {
        undefined8 uVar1;

        *(undefined8*)this = 0;
        uVar1 = *(undefined8*)(param_1 + 8);
        *(undefined8*)(this + 16) = *(undefined8*)param_1;
        *(undefined8*)(this + 24) = uVar1;
        *(code**)(this + 144) = function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(
                                               tweak::Event_const&) const ::{
            lambda(void*, void*) #1
        }
        (render::RenderContext&)#1
    },void>((tweak::Container&)->RegisterTweakyVars()::$_8::operator()(tweak::Event_const&)const::{
        lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(code**)this =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_8::operator()(tweak::Event_const&)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(code**)(this + 152) =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_8::operator()(tweak::Event_const&)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x1009149e0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&) const ::{
    lambda(void*, void*) #1
}
(render::RenderContext&)#1
},void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&)const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1009149f0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1},
   void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    undefined8 uVar1;

    uVar1 = *(undefined8*)((long)param_1 + 8);
    *(undefined8*)param_2 = *(undefined8*)param_1;
    *(undefined8*)((long)param_2 + 8) = uVar1;
}

// 0x100914a00, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100914a10, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1},
   void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100914a40, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_8::operator()(tweak::Event_const&)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

// 0x100916720, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&): jumps straight to the base-object constructor

// 0x100916730, 64 bytes, base-object constructor, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1},
   void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1}&&) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::operator()(
    function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>* this,
    _lambda_jag__render__RenderContext___1_* param_1) {
    *(undefined8*)this = 0;
    *(undefined8*)(this + 16) = *(undefined8*)param_1;
    *(code**)(this + 144) = function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(
                                           tweak::Event_const&) const ::{
        lambda(void*, void*) #1
    }
    (render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_11::operator()(tweak::Event_const&)const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, void*) #1
}
::__invoke;
*(code**)this =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_11::operator()(tweak::Event_const&)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__;
*(code**)(this + 152) =
    function < DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>((tweak::Container&)->RegisterTweakyVars()::$_11::operator()(tweak::Event_const&)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)::{
    lambda(void*) #1
}
::__invoke;
return;
}

// 0x100916770, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::__invoke(void*, void*)
/* __invoke(void*, void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&) const ::{
    lambda(void*, void*) #1
}
(render::RenderContext&)#1
},void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&)const::{
    lambda(void*, void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, void*) #1
}
::__invoke(void* param_1, void* param_2) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, void*) #1
    }
    ::operator()(param_1, param_2);
}

// 0x100916780, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, void*)#1}::operator()(void*, void*) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1},
   void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   void*)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, void*) const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(
        tweak::Event_const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, void*) #1
}
::operator()(void* param_1, void* param_2) {
    *(undefined8*)param_2 = *(undefined8*)param_1;
}

// 0x100916790, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::__invoke(void*, render::RenderContext&)
void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&) const ::{
    lambda(void*, render::RenderContext&) #1
}
(render::RenderContext&)#1
},void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&)const::{
    lambda(void*, render::RenderContext&) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*, render::RenderContext&) #1
}
::RenderContext__(void* param_1, RenderContext* param_2) {
    function <
        DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
            const ::{
        lambda(render::RenderContext&) #1
    }
    , void > ((tweak::Container&)->RegisterTweakyVars()::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&) const ::{
          lambda(render::RenderContext&) #1
      }&&)::{
        lambda(void*, render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1009167a0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*, render::RenderContext&)#1}::operator()(void*, render::RenderContext&) const
/* function<void (render::RenderContext&), 128ul, 16ul,
   (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1},
   void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event
   const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*,
   render::RenderContext&)#1}::TEMPNAMEPLACEHOLDERVALUE(void*, render::RenderContext&)
   const */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(
        tweak::Event_const&) const ::{
    lambda(render::RenderContext&) #1
}
, void > (DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::TEMPNAMEPLACEHOLDERVALUE(tweak::Event_const&)
              const ::{ lambda(render::RenderContext&) #1 }&&)::{
    lambda(void*, render::RenderContext&) #1
}
::operator()(void* param_1, RenderContext * param_2) {
    const ::{
        lambda(render::RenderContext&) #1
    }
    ::operator()(param_1, param_2);
}

// 0x1009167c0, 16 bytes, inline, placed by debug map only (low confidence)
// function<void (render::RenderContext&), 128ul, 16ul, (Methods)0>::function<DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}, void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event const&) const::{lambda(render::RenderContext&)#1}&&)::{lambda(void*)#1}::__invoke(void*)
/* __invoke(void*) */

void fixedfunction::function<void(render::RenderContext&), 128ul, 16ul, (Methods)0>::function <
    DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&) const ::{
    lambda(void*) #1
}
(render::RenderContext&)#1
},void>(DebugOverlayFPS::RegisterTweakyVars(tweak::Container&)::$_11::operator()(tweak::Event_const&)const::{
    lambda(void*) #1}(render::RenderContext&)#1
}&&)
     ::{
    lambda(void*) #1
}
::__invoke(void* param_1) {}

} // namespace jag::fixedfunction

namespace jag::tweak {
    class Event {
    public:
        ~Event();
        Event(Event&&);
        Event(shared_ptr<Control> const&, Name);
        Event(Event const&);

        // data members, from how the methods use this: 24 bytes
        char _unknown_0[16];
        undefined4 field_16; // offset 16
        char _unknown_20[4];
    };

    class Tweaky {
    public:
        GetFont() const;
        GetPlacement() const;
        GetRoot() const;
        GetRT7Core() const;
        GetFontHelper() const;
        Tweaky* GetFocus() const;
        Tweaky(graphics::RT7Core*, graphics::FontHelpers*, input::Input*);
        ~Tweaky();
        void AddGlobalControls();
        void AddButton(char const*, std::function<void(Event const&)> const&);
        void Add(shared_ptr<Control> const&);
        void AddCheckBox(char const*, bool&);
        void AddCheckBox(char const*, std::function<void(Event const&)> const&);
        void AddEditField(char const*, int, std::function<void(Event const&)> const&);
        void AddEnum(char const*, StringEnum const*, int*);
        void AddEnum(char const*, StringEnum const*, int*, std::function<void(Event const&)> const&);
        void AddSlider(char const*, float, float, float, int*);
        void AddSlider(char const*, float, float, float, unsigned int*);
        void AddSlider(char const*, float, float, float, float*);
        void AddSlider(char const*, float, float, float, std::function<void(Event const&)> const&);
        void AddSwatch(float*, float*, float*);
        void AddSwatch(float*, float*, float*, float*);
        AddGroup(char const*);
        void Draw(int, int, int, int);
        void DetectTweakyShown();
        int GetVisibleX() const;
        int GetVisibleY() const;
        IsAttached();
        void DrawScrollBar(Placement, bool, int, int, int, bool);
        void Clear();
        void DrawLine(int, int, int, int, bool);
        void DrawRect(int, int, int, int, bool);
        void FillRect(int, int, int, int);
        void GetSize(int&, int&) const;
        GetTextSize(int&, int&, StringView, int);
        uint GetMinControlHeight();
        int GetTextCenterYOffset(unsigned int);
        HandleMouseDown(float, float);
        void IsInsideVisibleArea(int, int) const;
        void ClearFocus();
        ulong HandleMouseMove(float, float);
        HandleMouseOver(float, float);
        HandleMouseUp(float, float);
        HandleMouseWheel(float, float, float);
        void ValidateScroll();
        HasInputFocus() const;
        void SetFont(shared_ptr<graphics::Font> const&);
        void SetControlMinHeight(unsigned int);
        void ToggleControlMinHeight();
        void SetFocus(shared_ptr<Control> const&);
        void EnsureVisible(shared_ptr<Control> const&);
        void SetFocusNext();
        void SetFocusPrevious();
        HandleChar(int);
        HandleKeyDown(int);
        HandleKeyUp(int);
        void TextDraw<eastl::fixed_string<char, 16, true, eastl::allocator>>(
            int, int, eastl::fixed_string<char, 16, true, eastl::allocator> const&, int, int, bool);
        void SetColour(unsigned int);
        void GetScroll(int&, int&) const;
        void TextDraw(int, int, char const*, int, int, bool);
        void GetTextSize(int&, int&, char const*, unsigned long, int);
        void SetVisibleArea(int, int);
        void TextDraw<std::basic_string_view<char, std::char_traits<char>>>(
            int, int, std::basic_string_view<char, std::char_traits<char>> const&, int, int, bool);
        IsMinimised();
        void SetMinimised(bool);
        void SetAttached(bool);
        static /* 4 bytes */ m_controlMinHeight; // = 15
        static shared_ptr<oldscape::rs2lib::worldmap::WorldmapAreaMetadata> /* 16 bytes */ NullTweaky;

        // data members, from how the methods use this: 164 bytes
        char _unknown_0[16];
        shared_ptr field_16; // offset 16
        char _unknown_32[16];
        RT7Core* field_48;     // offset 48
        FontHelpers* field_56; // offset 56
        shared_ptr field_64;   // offset 64
        uint field_80;         // offset 80
        char _unknown_84[4];
        Input* field_88;      // offset 88
        undefined8 field_96;  // offset 96
        int field_104;        // offset 104
        int field_108;        // offset 108
        int field_112;        // offset 112
        int field_116;        // offset 116
        undefined1 field_120; // offset 120
        char _unknown_121[3];
        float field_124; // offset 124
        float field_128; // offset 128
        int field_132;   // offset 132
        int field_136;   // offset 136
        int m_visibleX;  // offset 140
        int m_visibleY;  // offset 144
        uint m_colour;   // offset 148
        uint field_152;  // offset 152
        char _unknown_156[1];
        bool m_attached;  // offset 157
        bool m_minimised; // offset 158
        char field_159;   // offset 159
        char _unknown_160[4];
    };

    // 0x100912b70, 16 bytes, complete-object constructor, inline, placed by debug map only (low confidence)
    // Event::Event(shared_ptr<Control> const&, Event::Name): jumps straight to the base-object constructor

    // 0x100912bb0, 32 bytes, base-object constructor, inline, placed by debug map only (low confidence)
    // Event::Event(shared_ptr<Control> const&, Event::Name)
    void Event::Event(shared_ptr* param_1, undefined4 param_3) {
        new (this) shared_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = param_3;
    }

    // 0x100a3cda0, 32 bytes, inline, placed by class name
    // Tweaky::GetVisibleX() const
    int Tweaky::GetVisibleX() {
        if (m_visibleX == -1) {
            return field_112 - field_104;
        }
        return m_visibleX;
    }

    // 0x100a3cdc0, 32 bytes, inline, placed by class name
    // Tweaky::GetVisibleY() const
    int Tweaky::GetVisibleY() {
        if (m_visibleY == -1) {
            return field_116 - field_108;
        }
        return m_visibleY;
    }

    // 0x100a3cde0, 16 bytes, inline, placed by class name
    // Tweaky::IsAttached()
    undefined1 Tweaky::IsAttached() {
        return m_attached;
    }

    // 0x100a3d500, 112 bytes, inline, placed by class name
    // Tweaky::IsInsideVisibleArea(int, int) const
    void Tweaky::IsInsideVisibleArea(int param_1, int param_2) {
        int iVar1;
        int iVar2;
        int iVar3;
        int iVar4;
        int iVar5;
        GridRect local_48;

        iVar1 = field_104;
        iVar2 = field_108;
        local_48._16_4_ = param_2;
        iVar4 = GetVisibleX(this);
        iVar3 = field_108;
        iVar5 = GetVisibleY(this);
        new (&local_48) oldscape::dash3d::GridRect(iVar1, iVar2, iVar4 + iVar1, iVar3 + iVar5);
        local_48.IsInside(param_1, local_48._16_4_);
    }

    // 0x100a3fa10, 304 bytes, inline, placed by class name
    // void Tweaky::TextDraw<eastl::fixed_string<char, 16, true, eastl::allocator> >(int, int, eastl::fixed_string<char, 16, true, eastl::allocator> const&, int, int, bool)
    /* void Tweaky::TextDraw<eastl::string >(int, int,
   eastl::string const&, int, int, bool) */

    void Tweaky::TextDraw<eastl::string>(int param_1, int param_2, basic_string* param_3, int param_4, int param_5,
                                         bool param_6) {
        uint uVar1;
        FontHelpers* this_00;
        StringView SVar2;
        StringView SVar3;
        TextFlags in_stack_ffffffffffffff58;
        undefined7 in_stack_ffffffffffffff59;
        StringView local_a0;
        StringView local_90;
        TextProperties local_80;
        optional<unsigned int> local_58[8];
        TextFlags local_38[8];

        graphics::TextFlags::TextFlags(local_38, 1, param_6);
        new (&local_80) graphics::TextProperties((shared_ptr*)field_64, in_stack_ffffffffffffff58);
        local_80.SetAlignment(0, 0);
        uVar1 = m_colour;
        eastl::optional<unsigned int>::optional(local_58, &field_152);
        local_80.SetColours(uVar1, local_58);
        this_00 = field_56;
        if (param_4 < 1) {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_90,
                                                                                          (fixed_string*)param_3);
            SVar3.field_8._0_4_ = param_1 - field_136;
            SVar3.field_0 = (ulong)&local_90;
            SVar3.field_8._4_4_ = 0;
            this_00->DrawString(SVar3, param_2 - (field_132 + field_80), 512, (uint)&local_80,
                                (TextProperties*)CONCAT71(in_stack_ffffffffffffff59, in_stack_ffffffffffffff58));
        } else {
            StringView::StringView<eastl::fixed_string<char, 40, true, eastl::allocator>>(&local_a0,
                                                                                          (fixed_string*)param_3);
            SVar2.field_8._0_4_ = param_1 - field_136;
            SVar2.field_0 = (ulong)&local_a0;
            SVar2.field_8._4_4_ = 0;
            this_00->DrawStringMultiline(
                SVar2, param_2 - (field_132 + field_80), param_4, param_5, 0, (uint*)&local_80,
                (TextProperties*)CONCAT71(in_stack_ffffffffffffff59, in_stack_ffffffffffffff58));
        }
    }

    // 0x100a423d0, 16 bytes, inline, placed by class name
    // Tweaky::SetColour(unsigned int)
    void Tweaky::SetColour(uint param_1) {
        m_colour = param_1;
    }

    // 0x100a46f20, 32 bytes, inline, placed by class name
    // Tweaky::GetScroll(int&, int&) const
    void Tweaky::GetScroll(int* param_1, int* param_2) {
        *param_1 = field_136;
        *param_2 = field_132;
    }

    // 0x100a47c00, 96 bytes, inline, placed by class name
    // Tweaky::TextDraw(int, int, char const*, int, int, bool)
    void Tweaky::TextDraw(int param_1, int param_2, char* param_3, int param_4, int param_5, bool param_6) {
        basic_string_view<char, std::char_traits<char>> local_40[16];

        if (param_3 != (char*)0) {
            std::basic_string_view<char, std::char_traits<char>>::basic_string_view(local_40, param_3);
            TextDraw<std::basic_string_view<char, std::char_traits<char>>>(this, param_1, param_2, local_40, param_4,
                                                                           param_5, param_6);
        }
    }

    // 0x100a49350, 96 bytes, inline, placed by class name
    // Tweaky::GetTextSize(int&, int&, char const*, unsigned long, int)
    void Tweaky::GetTextSize(int* param_1, int* param_2, char* param_3, ulong param_4, int param_5) {
        StringView SVar2;
        StringView local_40;

        new (&local_40) StringView(param_3, param_4);
        SVar2.field_8._0_4_ = param_5;
        SVar2.field_0 = (ulong)&local_40;
        SVar2.field_8._4_4_ = 0;
        GetTextSize(this, param_1, param_2, SVar2, param_5);
    }

} // namespace jag::tweak

namespace jag {
    // 0x100913890, 48 bytes, inline, placed by debug map only (low confidence)
    // float Bytes2Kilobytes<unsigned long long>(unsigned long long)
    float Bytes2Kilobytes<unsigned long long>(ulonglong param_1) {
        return (float)param_1 * 0.0009765625;
    }

} // namespace jag
