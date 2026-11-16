// libs/oldscape/jagex3/sound/LazyWave.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: libs.oldscape.jagex3

#include "LazyWave.h"

namespace jag::oldscape::sound {
    // 0x10012d160: LazyWave::~LazyWave() has the same machine code as FoundObject::~FoundObject()

    // 0x100293210
    uint8_t LazyWave::Empty() const {
        return operator_cast_to_bool() ^ 1;
    }

    // 0x100293220
    auto LazyWave::TryGet() const {

        if (operator_cast_to_bool()) {
            (*this).operator->();
            if (std::mutex::try_lock()) {
                ResolveWave(&result, this);
                (*this).operator->();
                std::mutex::unlock();
                return result;
            }
        }
        return auto();
    }

    // 0x1002932d0
    auto LazyWave::ResolveWave() const {
        Wave* wave;
        Array<int> local_48;
        shared_ptr<Wave> local_30;
        ReturnValue local_20;

        long lVar2 = (*this).operator->();
        if (((lVar2 + 80))->operator_cast_to_bool() == '\0') {
            local_48 = Array<int>();
            lVar2 = (*this).operator->();
            local_20 = ((JagVorbis*)(*((lVar2 + 64))).operator->())->ToWaveMultistep(local_48);
            wave = (Wave*)std::unique_ptr<Wave>::release();
            local_30.shared_ptr<Wave, void>(wave);
            lVar2 = (*this).operator->();
            (*((lVar2 + 80))) = local_30;
            local_30 = shared_ptr();
            lVar2 = (*this).operator->();
            (*((lVar2 + 64))) = local_30;
        }
        lVar2 = (*this).operator->();
        return auto((lVar2 + 80));
    }

    // 0x100293400
    auto LazyWave::Get() const {
        if (operator_cast_to_bool() == '\0') {
            auto result;
        } else {
            (*this).operator->();
            std::mutex::lock();
            ResolveWave(&result, this);
            (*this).operator->();
            std::mutex::unlock();
        }
        return result;
    }

} // namespace jag::oldscape::sound
