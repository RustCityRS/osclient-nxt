// libs/game/runetek5/script/ScriptQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once

namespace jag::game {
    class ScriptQueue {
    public:
        class QueuedScript;
        ulonglong AddScript(shared_ptr<ui::Component> const&, Hook const&, unsigned int, unsigned int);
        bool RemoveQueueID(unsigned long long);
        void RemoveAll(shared_ptr<ui::Component> const&);
        ulong RemoveScriptTypeID(shared_ptr<ui::Component> const&, unsigned int);
        bool HasQueueID(shared_ptr<ui::Component> const&, unsigned long long) const;
        void GetCount(shared_ptr<ui::Component> const&) const;
        void GetScriptTypeCount(shared_ptr<ui::Component> const&, unsigned int) const;

        // data members, from how the methods use this: 48 bytes
        QueuedScript* field_0; // offset 0
        QueuedScript* field_8; // offset 8
        char _unknown_16[16];
        ulonglong field_32;  // offset 32
        uint field_40;       // offset 40
        undefined1 field_44; // offset 44
        char _unknown_45[3];
    };

    class ScriptQueue::QueuedScript {
    public:
        QueuedScript(shared_ptr<ui::Component> const&, unsigned long long, Hook const&, unsigned int);
        QueuedScript(QueuedScript&&);
        ~QueuedScript();
        QueuedScript* operator=(QueuedScript&&);

        // data members, from how the methods use this: 272 bytes
        char _unknown_0[16];
        ulonglong field_16; // offset 16
        Hook field_24;      // offset 24
        char _unknown_40[224];
        uint field_264; // offset 264
        char _unknown_268[4];
    };

    // 0x1003b8570, 16 bytes, complete-object constructor, inline, placed by class name and debug map
    // ScriptQueue::QueuedScript::QueuedScript(shared_ptr<ui::Component> const&, unsigned long long, Hook const&, unsigned int): jumps straight to the base-object constructor

    // 0x1003b86e0, 80 bytes, base-object constructor, inline, placed by class name and debug map
    // ScriptQueue::QueuedScript::QueuedScript(shared_ptr<ui::Component> const&, unsigned long long, Hook const&, unsigned int)
    void ScriptQueue::QueuedScript::QueuedScript(shared_ptr* param_1, ulonglong param_2, Hook* param_3, uint param_4) {
        new (this) weak_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = param_2;
        new (field_24, param_3) Hook();
        field_264 = param_4;
    }

    // 0x1003b9530, 16 bytes, complete-object constructor, inline, placed by class name
    // ScriptQueue::QueuedScript::QueuedScript(ScriptQueue::QueuedScript&&): jumps straight to the base-object constructor

    // 0x1003b9550, 80 bytes, base-object constructor, inline, placed by class name
    // ScriptQueue::QueuedScript::QueuedScript(ScriptQueue::QueuedScript&&)
    void ScriptQueue::QueuedScript::QueuedScript(QueuedScript* param_1) {
        new (this) weak_ptr<oldscape::dash3d::Decor>(param_1);
        field_16 = param_1->field_16;
        new (field_24, (Hook*)param_1->field_24) Hook();
        field_264 = param_1->field_264;
    }

    // 0x1003b9f00, 16 bytes, complete-object destructor, inline, placed by class name
    // ScriptQueue::QueuedScript::~QueuedScript(): jumps straight to the base-object destructor

    // 0x1003b9f10, 48 bytes, base-object destructor, inline, placed by class name
    // ScriptQueue::QueuedScript::~QueuedScript()
    void ScriptQueue::QueuedScript::~QueuedScript() {
        field_24->~Hook();
        ~weak_ptr();
    }

    // 0x1003b9f40, 16 bytes, inline, placed by class name
    // auto ScriptQueue::RemoveQueueID(unsigned long long)::$_0::operator()<ScriptQueue::QueuedScript const>(ScriptQueue::QueuedScript const&) const
    /* auto ScriptQueue::RemoveQueueID(unsigned long
   long)::$_0::TEMPNAMEPLACEHOLDERVALUE(ScriptQueue::QueuedScript const&) const */

    undefined8 ScriptQueue::RemoveQueueID(unsigned long long)::$_0::operator()(QueuedScript* param_1) {
        return CONCAT71((int7)(param_1->field_16 >> 8), param_1->field_16 == *(ulonglong*)this);
    }

    // 0x1003ba060, 64 bytes, inline, placed by class name
    // ScriptQueue::QueuedScript::operator=(ScriptQueue::QueuedScript&&)
    /* ScriptQueue::QueuedScript::TEMPNAMEPLACEHOLDERVALUE(ScriptQueue::QueuedScript&&)
    */

    QueuedScript* ScriptQueue::QueuedScript::operator=(QueuedScript* param_1) {
        weak_ptr<ui::Component>::operator=((weak_ptr<ui::Component>*)this, (weak_ptr*)param_1);
        field_16 = param_1->field_16;
        Hook::operator=((Hook*)field_24, (Hook*)param_1->field_24);
        field_264 = param_1->field_264;
        return this;
    }

    // 0x1003ba1b0, 64 bytes, inline, placed by class name
    // auto ScriptQueue::RemoveAll(shared_ptr<ui::Component> const&)::$_1::operator()<ScriptQueue::QueuedScript>(ScriptQueue::QueuedScript&) const
    /* auto ScriptQueue::RemoveAll(shared_ptr<ui::Component>
   const&)::$_1::TEMPNAMEPLACEHOLDERVALUE(ScriptQueue::QueuedScript&) const */

    ulong ScriptQueue::RemoveAll(shared_ptr<ui::Component> const&)::$_1::operator()(QueuedScript* param_1) {
        bool bVar1;
        undefined7 extraout_var;
        ulong uVar2;

        bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>((shared_ptr<ui::Component>*)param_1,
                                                                       *(weak_ptr**)this);
        if (bVar1) {
            uVar2 = 0;
        } else {
            bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>(*(shared_ptr<ui::Component>**)this,
                                                                           (weak_ptr*)param_1);
            uVar2 = CONCAT71(extraout_var, bVar1) ^ 1;
        }
        return uVar2;
    }

    // 0x1003ba2e0, 80 bytes, inline, placed by class name
    // auto ScriptQueue::RemoveScriptTypeID(shared_ptr<ui::Component> const&, unsigned int)::$_2::operator()<ScriptQueue::QueuedScript>(ScriptQueue::QueuedScript&) const
    /* auto ScriptQueue::RemoveScriptTypeID(shared_ptr<ui::Component> const&,
   unsigned int)::$_2::TEMPNAMEPLACEHOLDERVALUE(ScriptQueue::QueuedScript&) const */

    ulong ScriptQueue::RemoveScriptTypeID(shared_ptr<ui::Component> const&,
                                          unsigned int)::$_2::operator()(QueuedScript* param_1) {
        bool bVar1;
        undefined7 extraout_var;

        if ((param_1->field_24->GetX() == **(int**)this) &&
            (bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>((shared_ptr<ui::Component>*)param_1,
                                                                            *(weak_ptr**)(this + 8)),
             !bVar1)) {
            bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>(*(shared_ptr<ui::Component>**)(this + 8),
                                                                           (weak_ptr*)param_1);
            return CONCAT71(extraout_var, bVar1) ^ 1;
        }
        return 0;
    }

    // 0x1003ba330, 64 bytes, inline, placed by class name
    // auto ScriptQueue::HasQueueID(shared_ptr<ui::Component> const&, unsigned long long) const::$_3::operator()<ScriptQueue::QueuedScript const>(ScriptQueue::QueuedScript const&) const
    /* auto ScriptQueue::HasQueueID(shared_ptr<ui::Component> const&, unsigned long
   long) const::$_3::TEMPNAMEPLACEHOLDERVALUE(ScriptQueue::QueuedScript const&) const */

    _func_HasQueueID_shared_ptr_ptr_unsigned_long_long* const ::$_3::operator()(QueuedScript * param_1) {
        bool bVar1;
        undefined7 extraout_var;

        if ((param_1->field_16 == **(ulonglong**)this) &&
            (bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>((shared_ptr<ui::Component>*)param_1,
                                                                            *(weak_ptr**)(this + 8)),
             !bVar1)) {
            bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>(*(shared_ptr<ui::Component>**)(this + 8),
                                                                           (weak_ptr*)param_1);
            return (_func_HasQueueID_shared_ptr_ptr_unsigned_long_long*)(CONCAT71(extraout_var, bVar1) ^ 1);
        }
        return (_func_HasQueueID_shared_ptr_ptr_unsigned_long_long*)0;
    }

    // 0x1003ba370, 64 bytes, inline, placed by class name
    // ScriptQueue::GetCount(shared_ptr<ui::Component> const&) const::$_4::operator()(ScriptQueue::QueuedScript const&) const
    /* ScriptQueue::GetCount(shared_ptr<ui::Component> const&)
   const::$_4::TEMPNAMEPLACEHOLDERVALUE(ScriptQueue::QueuedScript const&) const */

    _func_GetCount_shared_ptr_ptr* const ::$_4::operator()(QueuedScript * param_1) {
        bool bVar1;
        undefined7 extraout_var;
        _func_GetCount_shared_ptr_ptr* p_Var2;

        bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>((shared_ptr<ui::Component>*)param_1,
                                                                       *(weak_ptr**)this);
        if (bVar1) {
            p_Var2 = (_func_GetCount_shared_ptr_ptr*)0;
        } else {
            bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>(*(shared_ptr<ui::Component>**)this,
                                                                           (weak_ptr*)param_1);
            p_Var2 = (_func_GetCount_shared_ptr_ptr*)(CONCAT71(extraout_var, bVar1) ^ 1);
        }
        return p_Var2;
    }

    // 0x1003ba3b0, 80 bytes, inline, placed by class name
    // ScriptQueue::GetScriptTypeCount(shared_ptr<ui::Component> const&, unsigned int) const::$_5::operator()(ScriptQueue::QueuedScript const&) const
    /* ScriptQueue::GetScriptTypeCount(shared_ptr<ui::Component> const&, unsigned
   int) const::$_5::TEMPNAMEPLACEHOLDERVALUE(ScriptQueue::QueuedScript const&) const */

    _func_GetScriptTypeCount_shared_ptr_ptr_unsigned_int* const ::$_5::operator()(QueuedScript * param_1) {
        bool bVar1;
        undefined7 extraout_var;

        if ((param_1->field_24->GetX() == **(int**)this) &&
            (bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>((shared_ptr<ui::Component>*)param_1,
                                                                            *(weak_ptr**)(this + 8)),
             !bVar1)) {
            bVar1 = shared_ptr<ui::Component>::owner_before<ui::Component>(*(shared_ptr<ui::Component>**)(this + 8),
                                                                           (weak_ptr*)param_1);
            return (_func_GetScriptTypeCount_shared_ptr_ptr_unsigned_int*)(CONCAT71(extraout_var, bVar1) ^ 1);
        }
        return (_func_GetScriptTypeCount_shared_ptr_ptr_unsigned_int*)0;
    }

} // namespace jag::game
