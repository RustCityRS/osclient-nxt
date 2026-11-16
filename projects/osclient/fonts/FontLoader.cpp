// projects/osclient/fonts/FontLoader.cpp
// Reconstructed from the OSRS macOS client (osclient build OS1669); the comment above each definition is its address.
// target: osclient

#include "FontLoader.h"

namespace jag::oldscape {
    // 0x100068f90
    FontLoader::FontLoader(jagex3::Js5* js51, jagex3::Js5* js52) : field_0(js51), field_8(js52) {

        new (&field_16) eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash>(local_20);
    }

    // 0x100068fe0
    FontLoader* FontLoader::LoadFonts(const Array<Font>& fonts) {
        hashtable<Font, eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric>>, eastl::allocator,
                  eastl::use_first<eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric>>>, eastl::equal_to<Font>,
                  FontHash, eastl::mod_range_hashing, eastl::default_ranged_hash, eastl::prime_rehash_policy, false,
                  true, true>* this_00;
        long lVar4;
        shared_ptr<jstring::PixfontGeneric>* psVar5;
        char* str1;
        Array<std::unique_ptr<LoadingScreenScript::AnimLayer>>* in_RDX;
        ReturnValue local_70;
        ReturnValue local_60;
        uint32_t local_34;

        new (this) eastl::hash_map<Font, shared_ptr<jstring::PixfontGeneric>, FontHash>(local_70);
        auto puVar3 = in_RDX->data();
        auto local_50 = in_RDX->end();
        if (puVar3 != local_50) {
            this_00 = (hashtable<Font, eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric>>, eastl::allocator,
                                 eastl::use_first<eastl::pair<Font const, shared_ptr<jstring::PixfontGeneric>>>,
                                 eastl::equal_to<Font>, FontHash, eastl::mod_range_hashing, eastl::default_ranged_hash,
                                 eastl::prime_rehash_policy, false, true, true>*)(fonts + 16);
            do {
                local_34 = *puVar3;
                local_70 = this_00->find(local_34);
                local_60 = this_00->end();
                if (local_70 != local_60 == '\0') {
                    str1 = (char*)GetStringName(local_34);
                    local_60 =
                        graphics::pixloader::MakepixfontGeneric(*(*(Js5**)fonts), *(*(Js5**)(fonts + 8)), str1, "");
                    if (local_60 != nullptr) {
                        psVar5 = (shared_ptr<jstring::PixfontGeneric>*)(*this_00)[local_34];
                        *psVar5 = local_60;
                        psVar5 = (shared_ptr<jstring::PixfontGeneric>*)(*this)[local_34];
                        *psVar5 = local_60;
                    }
                } else {
                    lVar4 = local_70.HeapBeginPtr();
                    psVar5 = (shared_ptr<jstring::PixfontGeneric>*)(*this)[local_34];
                    *psVar5 = (*((lVar4 + 8)));
                }
                puVar3 = puVar3 + 1;
            } while (puVar3 != local_50);
        }
        return this;
    }

} // namespace jag::oldscape
