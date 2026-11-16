// libs/oldscape/jagex3/sound/delayed_stream.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "delayed_stream.h"

namespace jag::oldscape::sound {
    // 0x100029ea0: DelayedStream::SelfMixCost() has the same machine code as InputFieldKeyboardHandler::PointerPress(int, int, int, int, unsigned long long)

    // 0x100295980
    DelayedStream::DelayedStream(const shared_ptr<PCMStream>& pcmStream, int arg2)
        : PCMStream(), field_72(pcmStream), field_88(arg2) {
        long lVar1 = field_72.operator->();
        field_56 = (*((lVar1 + 56)));
    }

    // 0x100295a90
    auto DelayedStream::BySamples(shared_ptr<PCMStream>& pcmStream, int arg2) {
        ReturnValue local_30;

        int local_1c = arg2;
        make_shared<DelayedStream, shared_ptr<PCMStream>&, int>(&local_30, pcmStream, &local_1c);
        auto result(&local_30);
        return result;
    }

    // 0x100295ba0
    auto DelayedStream::ByMillis(shared_ptr<PCMStream> pcmStream, int arg2) {
        ReturnValue local_30;

        int local_1c = (arg2 * PCMPlayer::m_frequency) / 1000;
        make_shared<DelayedStream, shared_ptr<PCMStream>&, int>(&local_30, pcmStream, &local_1c);
        auto result(&local_30);
        return result;
    }

    // 0x100295c20
    void DelayedStream::DoMix(Array<int>& arg1, int arg2, int arg3) {
        shared_ptr<PCMStream>* this_00;
        long* plVar2;

        int iVar1 = field_88;
        if (iVar1 - arg3 == 0 || iVar1 < arg3) {
            field_88 = 0;
            this_00 = (shared_ptr<PCMStream>*)GiveLinkTo(field_72);
            if (arg3 - iVar1 != 0 && iVar1 <= arg3) {
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 40))(plVar2, arg1, iVar1 + arg2, arg3 - iVar1);
            }
        } else {
            field_88 = iVar1 - arg3;
        }
    }

    // 0x100295cf0
    void DelayedStream::PretendToMix(int arg1) {
        shared_ptr<PCMStream>* this_00;
        long* plVar2;

        int iVar1 = field_88;
        if (iVar1 - arg1 == 0 || iVar1 < arg1) {
            field_88 = 0;
            this_00 = (shared_ptr<PCMStream>*)GiveLinkTo(field_72);
            if (arg1 - iVar1 != 0 && iVar1 <= arg1) {
                plVar2 = (long*)(*this_00).operator->();
                (**(void (**)(...))(*plVar2 + 48))(plVar2, arg1 - iVar1);
            }
        } else {
            field_88 = iVar1 - arg1;
        }
    }

    // 0x1002a75f0: DelayedStream::SubstreamNext() has the same machine code as DelayedStream::SubstreamStart()

} // namespace jag::oldscape::sound

namespace jag {
    // 0x100295af0
    shared_ptr_if_not_array<oldscape::sound::DelayedStream>::type
    make_shared<oldscape::sound::DelayedStream, shared_ptr<oldscape::sound::PCMStream>&, int&>(
        shared_ptr<oldscape::sound::PCMStream>& pcmStream, int& arg2) {
        AutoSingleton<ShaderThreadPoolSingleton>* autoSingleton;
        int local_3c;
        DelayedStream* local_38[2];

        auto arg1 = aligned_alloc(128, 8);
        if (arg1 == nullptr) {
            shared_ptr_if_not_array<oldscape::sound::DelayedStream>::type result;
        } else {
            local_38[0] = placement_new<oldscape::sound::DelayedStream, shared_ptr<oldscape::sound::PCMStream>&, int>(
                (void*)((long)arg1 + 32), pcmStream, arg2);
            local_3c = 1;
            autoSingleton = (AutoSingleton<ShaderThreadPoolSingleton>*)
                placement_new<ref_counter_shared<oldscape::sound::DelayedStream>, int,
                              oldscape::sound::DelayedStream*&>(arg1, &local_3c, local_38);
            autoSingleton->~AutoSingleton();
            autoSingleton->~AutoSingleton();
            new (&result) eastl::hashtable_iterator(autoSingleton, (unsigned long)local_38[0]);
        }
        return result;
    }

} // namespace jag
