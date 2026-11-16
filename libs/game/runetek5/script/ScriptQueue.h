// libs/game/runetek5/script/ScriptQueue.h
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.

#pragma once

namespace jag::game {
    class ScriptQueue {
    public:
        class QueuedScript;
        unsigned long long AddScript(const shared_ptr<ui::Component>& component, const Hook& hook, unsigned int arg3,
                                     unsigned int arg4);
        bool RemoveQueueID(unsigned long long arg1);
        void RemoveAll(const shared_ptr<ui::Component>& component);
        unsigned long RemoveScriptTypeID(const shared_ptr<ui::Component>& component, unsigned int arg2);
        bool HasQueueID(const shared_ptr<ui::Component>& component, unsigned long long arg2) const;
        void GetCount(const shared_ptr<ui::Component>& component) const;
        void GetScriptTypeCount(const shared_ptr<ui::Component>& component, unsigned int arg2) const;

    private:
        QueuedScript* field_0;
        QueuedScript* field_8;
        uint8_t _unknown_16[16];
        unsigned long long field_32;
        unsigned int field_40;
        uint8_t field_44;
        uint8_t _unknown_45[3];
    };

    class ScriptQueue::QueuedScript {
    public:
        QueuedScript(const shared_ptr<ui::Component>& component, unsigned long long arg2, const Hook& hook,
                     unsigned int arg4);
        QueuedScript(QueuedScript&& queuedScript);
        ~QueuedScript();
        QueuedScript* operator=(QueuedScript&& queuedScript);

    private:
        uint8_t _unknown_0[16];
        unsigned long long field_16;
        Hook field_24;
        uint8_t _unknown_40[224];
        unsigned int field_264;
        uint8_t _unknown_268[4];
    };

    // 0x1003b86e0
    ScriptQueue::QueuedScript::QueuedScript(const shared_ptr<ui::Component>& component, unsigned long long arg2,
                                            const Hook& hook, unsigned int arg4)
        : weak_ptr(component), field_16(arg2), field_24(hook), field_264(arg4) {}

    // 0x1003b9550
    ScriptQueue::QueuedScript::QueuedScript(ScriptQueue::QueuedScript&& queuedScript)
        : weak_ptr(queuedScript), field_16(queuedScript.field_16), field_24(queuedScript.field_24),
          field_264(queuedScript.field_264) {}

    // 0x1003b9f10
    ScriptQueue::QueuedScript::~QueuedScript() {
        field_24->~Hook();
    }

    // 0x1003b9f40
    auto ScriptQueue::RemoveQueueID(unsigned long long)::$_0::operator()<ScriptQueue::QueuedScript const>(
        const ScriptQueue::QueuedScript& queuedScript) const {
        return (auto)(((uint64_t)((int64_t)(queuedScript.field_16 >> 8)) << 8) |
                      (uint8_t)(queuedScript.field_16 == *(unsigned long long*)this));
    }

    // 0x1003ba060
    QueuedScript* ScriptQueue::QueuedScript::operator=(ScriptQueue::QueuedScript&& queuedScript) {
        *this = queuedScript;
        field_16 = queuedScript.field_16;
        *field_24 = queuedScript.field_24;
        field_264 = queuedScript.field_264;
        return this;
    }

    // 0x1003ba1b0
    auto ScriptQueue::RemoveAll(shared_ptr<ui::Component> const&)::$_1::operator()<ScriptQueue::QueuedScript>(
        ScriptQueue::QueuedScript& queuedScript) const {
        auto aVar2;
        uint64_t extraout_var;

        bool bVar1 = queuedScript.owner_before<ui::Component>(*(*(shared_ptr<ui::Component>**)this));
        if (bVar1) {
            aVar2 = 0;
        } else {
            bVar1 = (*(shared_ptr<ui::Component>**)this)->owner_before<ui::Component>(queuedScript);
            aVar2 = (auto)(((uint64_t)extraout_var << 8) | (uint8_t)bVar1) ^ 1;
        }
        return aVar2;
    }

    // 0x1003ba2e0
    auto ScriptQueue::RemoveScriptTypeID(
        shared_ptr<ui::Component> const&,
        unsigned int)::$_2::operator()<ScriptQueue::QueuedScript>(ScriptQueue::QueuedScript& queuedScript) const {
        bool bVar1;
        uint64_t extraout_var;

        if ((queuedScript.field_24->GetX() == **(int**)this) &&
            (bVar1 = queuedScript.owner_before<ui::Component>(*(*(shared_ptr<ui::Component>**)(this + 8))), !bVar1)) {
            bVar1 = (*(shared_ptr<ui::Component>**)(this + 8))->owner_before<ui::Component>(queuedScript);
            return (auto)(((uint64_t)extraout_var << 8) | (uint8_t)bVar1) ^ 1;
        }
        return 0;
    }

    // 0x1003ba330
    auto ScriptQueue::HasQueueID(shared_ptr<ui::Component> const&, unsigned long long)
        const ::$_3::operator()<ScriptQueue::QueuedScript const>(const ScriptQueue::QueuedScript& queuedScript) const {
        bool bVar1;
        uint64_t extraout_var;

        if ((queuedScript.field_16 == **(unsigned long long**)this) &&
            (bVar1 = queuedScript.owner_before<ui::Component>(*(*(shared_ptr<ui::Component>**)(this + 8))), !bVar1)) {
            bVar1 = (*(shared_ptr<ui::Component>**)(this + 8))->owner_before<ui::Component>(queuedScript);
            return (auto)(((uint64_t)extraout_var << 8) | (uint8_t)bVar1) ^ 1;
        }
        return 0;
    }

    // 0x1003ba370
    unsigned long ScriptQueue::GetCount(shared_ptr<ui::Component> const&) const ::$_4::operator()(
        const ScriptQueue::QueuedScript& queuedScript) const {
        uint64_t extraout_var;
        unsigned long uVar2;

        bool bVar1 = queuedScript.owner_before<ui::Component>(*(*(shared_ptr<ui::Component>**)this));
        if (bVar1) {
            uVar2 = 0;
        } else {
            bVar1 = (*(shared_ptr<ui::Component>**)this)->owner_before<ui::Component>(queuedScript);
            uVar2 = (((uint64_t)extraout_var << 8) | (uint8_t)bVar1) ^ 1;
        }
        return uVar2;
    }

    // 0x1003ba3b0
    unsigned long ScriptQueue::GetScriptTypeCount(shared_ptr<ui::Component> const&, unsigned int)
        const ::$_5::operator()(const ScriptQueue::QueuedScript& queuedScript) const {
        bool bVar1;

        if ((queuedScript.field_24->GetX() == **(int**)this) &&
            (bVar1 = queuedScript.owner_before<ui::Component>(*(*(shared_ptr<ui::Component>**)(this + 8))), !bVar1)) {
            bVar1 = (*(shared_ptr<ui::Component>**)(this + 8))->owner_before<ui::Component>(queuedScript);
            return bVar1 ^ 1;
        }
        return 0;
    }

} // namespace jag::game
