// libs/oldscape/jagex3/sound/LazyWave.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.
// target: libs.oldscape.jagex3

#include "LazyWave.h"

namespace jag::oldscape::sound {
    // 0x1000e10d0: the linker folded this into FoundObject::~FoundObject(), which has identical code
    LazyWave::~LazyWave();

    // 0x10012d160: the linker folded this into FoundObject::~FoundObject(), which has identical code
    LazyWave::~LazyWave();

    // 0x100293210, 16 bytes, placed by class name and debug map
    // LazyWave::Empty() const
    bool LazyWave::Empty() {
        bool bVar1;

        bVar1 = operator_cast_to_bool();
        return !bVar1;
    }

    // 0x100293220, 112 bytes, placed by class name and debug map
    // LazyWave::TryGet() const
    LazyWave* LazyWave::TryGet() {
        shared_ptr* in_RSI;

        if (shared_ptr::operator_cast_to_bool(in_RSI)) {
            shared_ptr<LazyWave::LazyWaveImpl>::operator->((shared_ptr<LazyWave::LazyWaveImpl>*)in_RSI);
            if (std::mutex::try_lock() != '\0') {
                ResolveWave(this);
                shared_ptr<LazyWave::LazyWaveImpl>::operator->((shared_ptr<LazyWave::LazyWaveImpl>*)in_RSI);
                std::mutex::unlock();
                return this;
            }
        }
        new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        return this;
    }

    // 0x1002932d0, 304 bytes, placed by class name and debug map
    // LazyWave::ResolveWave() const
    LazyWave* LazyWave::ResolveWave() {
        bool bVar1;
        long lVar2;
        Array* pAVar3;
        Wave* pWVar4;
        shared_ptr<LazyWave::LazyWaveImpl>* in_RSI;
        Array<int, eastl::allocator> local_48[24];
        shared_ptr local_30;
        unique_ptr<Wave, std::default_delete<Wave>> local_20[8];

        lVar2 = shared_ptr<LazyWave::LazyWaveImpl>::operator->(in_RSI);
        bVar1 = ((lVar2 + 80))->operator_cast_to_bool();
        if (!bVar1) {
            Array<int, eastl::allocator>::Array(local_48);
            lVar2 = shared_ptr<LazyWave::LazyWaveImpl>::operator->(in_RSI);
            pAVar3 = (Array*)shared_ptr<JagVorbis>::operator->((shared_ptr<JagVorbis>*)(lVar2 + 64));
            local_20->ToWaveMultistep(pAVar3);
            pWVar4 = (Wave*)std::unique_ptr<Wave, std::default_delete<Wave>>::release(local_20);
            shared_ptr<Wave>::shared_ptr<Wave, void>((shared_ptr<Wave>*)&local_30, pWVar4);
            lVar2 = shared_ptr<LazyWave::LazyWaveImpl>::operator->(in_RSI);
            shared_ptr<Wave>::operator=((shared_ptr<Wave>*)(lVar2 + 80), &local_30);
            local_30.~shared_ptr();
            std::unique_ptr<Wave, std::default_delete<Wave>>::~unique_ptr(local_20);
            new (&local_30) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
            lVar2 = shared_ptr<LazyWave::LazyWaveImpl>::operator->(in_RSI);
            shared_ptr<JagVorbis>::operator=((shared_ptr<JagVorbis>*)(lVar2 + 64), &local_30);
            local_30.~shared_ptr();
            local_48->~Array();
        }
        lVar2 = shared_ptr<LazyWave::LazyWaveImpl>::operator->(in_RSI);
        new (this) shared_ptr<dash3d::Decor>((shared_ptr*)(lVar2 + 80));
        return this;
    }

    // 0x100293400, 112 bytes, placed by class name and debug map
    // LazyWave::Get() const
    LazyWave* LazyWave::Get() {
        shared_ptr* in_RSI;

        if (shared_ptr::operator_cast_to_bool(in_RSI)) {
            shared_ptr<LazyWave::LazyWaveImpl>::operator->((shared_ptr<LazyWave::LazyWaveImpl>*)in_RSI);
            std::mutex::lock();
            ResolveWave(this);
            shared_ptr<LazyWave::LazyWaveImpl>::operator->((shared_ptr<LazyWave::LazyWaveImpl>*)in_RSI);
            std::mutex::unlock();
        } else {
            new (this) shared_ptr<rs2lib::worldmap::WorldmapAreaMetadata>(0);
        }
        return this;
    }

} // namespace jag::oldscape::sound
