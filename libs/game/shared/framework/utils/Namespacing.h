// libs/game/shared/framework/utils/Namespacing.h
// Reconstructed from the OSRS macOS client (osclient build OS1669). Names, signatures, file
// placement, inheritance and virtual order come from the binary; see RECONSTRUCTION.md.

#pragma once
// target: libs.game.shared

namespace jag::game {
    // 0x1006e52c0, 1424 bytes, placed by debug map only (low confidence)
    // ToBase(unsigned int)
    uint ToBase(uint param_1) {
        wchar16 wVar1;
        uint uVar2;

        uVar2 = 95;
        switch (param_1) {
        case 32:
        case 45:
        case 95:
        case 160:
            goto switchD_1006e52e2_caseD_20;
        default:
            wVar1 = eastl::CharToLower<char16_t>((wchar16)param_1);
            uVar2 = (uint)(ushort)wVar1;
        switchD_1006e52e2_caseD_20:
            return uVar2;
        case 35:
        case 91:
        case 93:
            return param_1;
        case 170:
        case 186:
        case 338:
        case 339:
        case 352:
        case 353:
            return 115;
        case 192:
        case 193:
        case 194:
        case 195:
        case 196:
        case 224:
        case 225:
        case 226:
        case 227:
        case 228:
            return 97;
        case 199:
        case 231:
            return 99;
        case 200:
        case 201:
        case 202:
        case 203:
        case 232:
        case 233:
        case 234:
        case 235:
            return 101;
        case 205:
        case 206:
        case 207:
        case 237:
        case 238:
        case 239:
            return 105;
        case 209:
        case 241:
            return 110;
        case 210:
        case 211:
        case 212:
        case 213:
        case 214:
        case 242:
        case 243:
        case 244:
        case 245:
        case 246:
            return 111;
        case 217:
        case 218:
        case 219:
        case 220:
        case 249:
        case 250:
        case 251:
        case 252:
            return 117;
        case 221:
        case 253:
            return 121;
        case 223:
            return 98;
        }
    }

} // namespace jag::game
