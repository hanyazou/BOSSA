///////////////////////////////////////////////////////////////////////////////
// BOSSA
//
// Copyright (c) 2011-2012, ShumaTech
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//     * Redistributions of source code must retain the above copyright
//       notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above copyright
//       notice, this list of conditions and the following disclaimer in the
//       documentation and/or other materials provided with the distribution.
//     * Neither the name of the <organization> nor the
//       names of its contributors may be used to endorse or promote products
//       derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
// WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL <COPYRIGHT HOLDER> BE LIABLE FOR ANY
// DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
// (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
// LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
// ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
// SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
///////////////////////////////////////////////////////////////////////////////
#include "FlashFactory.h"

#include "Devices.h"
#include "EfcFlash.h"
#include "EefcFlash.h"
#include "NvmFlash.h"

FlashFactory::FlashFactory()
{
}

FlashFactory::~FlashFactory()
{
}

Flash::Ptr
FlashFactory::create(Samba& samba, uint32_t chipId)
{
    Flash* flash;

    switch (chipId)
    {
    //
    // SAMD21
    //
    case ATSAMD21J18A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21J18A_NAME, ATSAMD21J18A_FLASH_BASE, ATSAMD21J18A_FLASH_PAGES, ATSAMD21J18A_FLASH_PAGE_SIZE,
                              ATSAMD21J18A_FLASH_PLANES, ATSAMD21J18A_FLASH_LOCK_REGIONS,
                              ATSAMD21J18A_BUFFER_ADDR, ATSAMD21J18A_STACK_ADDR, ATSAMD21J18A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21J17A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21J17A_NAME, ATSAMD21J17A_FLASH_BASE, ATSAMD21J17A_FLASH_PAGES, ATSAMD21J17A_FLASH_PAGE_SIZE,
                              ATSAMD21J17A_FLASH_PLANES, ATSAMD21J17A_FLASH_LOCK_REGIONS,
                              ATSAMD21J17A_BUFFER_ADDR, ATSAMD21J17A_STACK_ADDR, ATSAMD21J17A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21J16A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21J16A_NAME, ATSAMD21J16A_FLASH_BASE, ATSAMD21J16A_FLASH_PAGES, ATSAMD21J16A_FLASH_PAGE_SIZE,
                              ATSAMD21J16A_FLASH_PLANES, ATSAMD21J16A_FLASH_LOCK_REGIONS,
                              ATSAMD21J16A_BUFFER_ADDR, ATSAMD21J16A_STACK_ADDR, ATSAMD21J16A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21J15A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21J15A_NAME, ATSAMD21J15A_FLASH_BASE, ATSAMD21J15A_FLASH_PAGES, ATSAMD21J15A_FLASH_PAGE_SIZE,
                              ATSAMD21J15A_FLASH_PLANES, ATSAMD21J15A_FLASH_LOCK_REGIONS,
                              ATSAMD21J15A_BUFFER_ADDR, ATSAMD21J15A_STACK_ADDR, ATSAMD21J15A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21G18A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21G18A_NAME, ATSAMD21G18A_FLASH_BASE, ATSAMD21G18A_FLASH_PAGES, ATSAMD21G18A_FLASH_PAGE_SIZE,
                              ATSAMD21G18A_FLASH_PLANES, ATSAMD21G18A_FLASH_LOCK_REGIONS,
                              ATSAMD21G18A_BUFFER_ADDR, ATSAMD21G18A_STACK_ADDR, ATSAMD21G18A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21G17A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21G17A_NAME, ATSAMD21G17A_FLASH_BASE, ATSAMD21G17A_FLASH_PAGES, ATSAMD21G17A_FLASH_PAGE_SIZE,
                              ATSAMD21G17A_FLASH_PLANES, ATSAMD21G17A_FLASH_LOCK_REGIONS,
                              ATSAMD21G17A_BUFFER_ADDR, ATSAMD21G17A_STACK_ADDR, ATSAMD21G17A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21G16A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21G16A_NAME, ATSAMD21G16A_FLASH_BASE, ATSAMD21G16A_FLASH_PAGES, ATSAMD21G16A_FLASH_PAGE_SIZE,
                              ATSAMD21G16A_FLASH_PLANES, ATSAMD21G16A_FLASH_LOCK_REGIONS,
                              ATSAMD21G16A_BUFFER_ADDR, ATSAMD21G16A_STACK_ADDR, ATSAMD21G16A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21G15A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21G15A_NAME, ATSAMD21G15A_FLASH_BASE, ATSAMD21G15A_FLASH_PAGES, ATSAMD21G15A_FLASH_PAGE_SIZE,
                              ATSAMD21G15A_FLASH_PLANES, ATSAMD21G15A_FLASH_LOCK_REGIONS,
                              ATSAMD21G15A_BUFFER_ADDR, ATSAMD21G15A_STACK_ADDR, ATSAMD21G15A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21E18A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21E18A_NAME, ATSAMD21E18A_FLASH_BASE, ATSAMD21E18A_FLASH_PAGES, ATSAMD21E18A_FLASH_PAGE_SIZE,
                              ATSAMD21E18A_FLASH_PLANES, ATSAMD21E18A_FLASH_LOCK_REGIONS,
                              ATSAMD21E18A_BUFFER_ADDR, ATSAMD21E18A_STACK_ADDR, ATSAMD21E18A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21E17A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21E17A_NAME, ATSAMD21E17A_FLASH_BASE, ATSAMD21E17A_FLASH_PAGES, ATSAMD21E17A_FLASH_PAGE_SIZE,
                              ATSAMD21E17A_FLASH_PLANES, ATSAMD21E17A_FLASH_LOCK_REGIONS,
                              ATSAMD21E17A_BUFFER_ADDR, ATSAMD21E17A_STACK_ADDR, ATSAMD21E17A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21E16A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21E16A_NAME, ATSAMD21E16A_FLASH_BASE, ATSAMD21E16A_FLASH_PAGES, ATSAMD21E16A_FLASH_PAGE_SIZE,
                              ATSAMD21E16A_FLASH_PLANES, ATSAMD21E16A_FLASH_LOCK_REGIONS,
                              ATSAMD21E16A_BUFFER_ADDR, ATSAMD21E16A_STACK_ADDR, ATSAMD21E16A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD21E15A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD21E15A_NAME, ATSAMD21E15A_FLASH_BASE, ATSAMD21E15A_FLASH_PAGES, ATSAMD21E15A_FLASH_PAGE_SIZE,
                              ATSAMD21E15A_FLASH_PLANES, ATSAMD21E15A_FLASH_LOCK_REGIONS,
                              ATSAMD21E15A_BUFFER_ADDR, ATSAMD21E15A_STACK_ADDR, ATSAMD21E15A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    //
    // SAML21
    //
    case ATSAML21J18B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21J18B_NAME, ATSAML21J18B_FLASH_BASE, ATSAML21J18B_FLASH_PAGES, ATSAML21J18B_FLASH_PAGE_SIZE,
                              ATSAML21J18B_FLASH_PLANES, ATSAML21J18B_FLASH_LOCK_REGIONS,
                              ATSAML21J18B_BUFFER_ADDR, ATSAML21J18B_STACK_ADDR, ATSAML21J18B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21J17B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21J17B_NAME, ATSAML21J17B_FLASH_BASE, ATSAML21J17B_FLASH_PAGES, ATSAML21J17B_FLASH_PAGE_SIZE,
                              ATSAML21J17B_FLASH_PLANES, ATSAML21J17B_FLASH_LOCK_REGIONS,
                              ATSAML21J17B_BUFFER_ADDR, ATSAML21J17B_STACK_ADDR, ATSAML21J17B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21J16B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21J16B_NAME, ATSAML21J16B_FLASH_BASE, ATSAML21J16B_FLASH_PAGES, ATSAML21J16B_FLASH_PAGE_SIZE,
                              ATSAML21J16B_FLASH_PLANES, ATSAML21J16B_FLASH_LOCK_REGIONS,
                              ATSAML21J16B_BUFFER_ADDR, ATSAML21J16B_STACK_ADDR, ATSAML21J16B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21G18B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21G18B_NAME, ATSAML21G18B_FLASH_BASE, ATSAML21G18B_FLASH_PAGES, ATSAML21G18B_FLASH_PAGE_SIZE,
                              ATSAML21G18B_FLASH_PLANES, ATSAML21G18B_FLASH_LOCK_REGIONS,
                              ATSAML21G18B_BUFFER_ADDR, ATSAML21G18B_STACK_ADDR, ATSAML21G18B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21G17B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21G17B_NAME, ATSAML21G17B_FLASH_BASE, ATSAML21G17B_FLASH_PAGES, ATSAML21G17B_FLASH_PAGE_SIZE,
                              ATSAML21G17B_FLASH_PLANES, ATSAML21G17B_FLASH_LOCK_REGIONS,
                              ATSAML21G17B_BUFFER_ADDR, ATSAML21G17B_STACK_ADDR, ATSAML21G17B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21G16B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21G16B_NAME, ATSAML21G16B_FLASH_BASE, ATSAML21G16B_FLASH_PAGES, ATSAML21G16B_FLASH_PAGE_SIZE,
                              ATSAML21G16B_FLASH_PLANES, ATSAML21G16B_FLASH_LOCK_REGIONS,
                              ATSAML21G16B_BUFFER_ADDR, ATSAML21G16B_STACK_ADDR, ATSAML21G16B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21E18B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21E18B_NAME, ATSAML21E18B_FLASH_BASE, ATSAML21E18B_FLASH_PAGES, ATSAML21E18B_FLASH_PAGE_SIZE,
                              ATSAML21E18B_FLASH_PLANES, ATSAML21E18B_FLASH_LOCK_REGIONS,
                              ATSAML21E18B_BUFFER_ADDR, ATSAML21E18B_STACK_ADDR, ATSAML21E18B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21E17B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21E17B_NAME, ATSAML21E17B_FLASH_BASE, ATSAML21E17B_FLASH_PAGES, ATSAML21E17B_FLASH_PAGE_SIZE,
                              ATSAML21E17B_FLASH_PLANES, ATSAML21E17B_FLASH_LOCK_REGIONS,
                              ATSAML21E17B_BUFFER_ADDR, ATSAML21E17B_STACK_ADDR, ATSAML21E17B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21E16B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21E16B_NAME, ATSAML21E16B_FLASH_BASE, ATSAML21E16B_FLASH_PAGES, ATSAML21E16B_FLASH_PAGE_SIZE,
                              ATSAML21E16B_FLASH_PLANES, ATSAML21E16B_FLASH_LOCK_REGIONS,
                              ATSAML21E16B_BUFFER_ADDR, ATSAML21E16B_STACK_ADDR, ATSAML21E16B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAML21E15B_CHIPID:
        flash = new NvmFlash( samba, ATSAML21E15B_NAME, ATSAML21E15B_FLASH_BASE, ATSAML21E15B_FLASH_PAGES, ATSAML21E15B_FLASH_PAGE_SIZE,
                              ATSAML21E15B_FLASH_PLANES, ATSAML21E15B_FLASH_LOCK_REGIONS,
                              ATSAML21E15B_BUFFER_ADDR, ATSAML21E15B_STACK_ADDR, ATSAML21E15B_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    //
    // SAMC21
    //
    case ATSAMC21J18A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21J18A_NAME, ATSAMC21J18A_FLASH_BASE, ATSAMC21J18A_FLASH_PAGES, ATSAMC21J18A_FLASH_PAGE_SIZE,
                              ATSAMC21J18A_FLASH_PLANES, ATSAMC21J18A_FLASH_LOCK_REGIONS,
                              ATSAMC21J18A_BUFFER_ADDR, ATSAMC21J18A_STACK_ADDR, ATSAMC21J18A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21J17A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21J17A_NAME, ATSAMC21J17A_FLASH_BASE, ATSAMC21J17A_FLASH_PAGES, ATSAMC21J17A_FLASH_PAGE_SIZE,
                              ATSAMC21J17A_FLASH_PLANES, ATSAMC21J17A_FLASH_LOCK_REGIONS,
                              ATSAMC21J17A_BUFFER_ADDR, ATSAMC21J17A_STACK_ADDR, ATSAMC21J17A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21J16A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21J16A_NAME, ATSAMC21J16A_FLASH_BASE, ATSAMC21J16A_FLASH_PAGES, ATSAMC21J16A_FLASH_PAGE_SIZE,
                              ATSAMC21J16A_FLASH_PLANES, ATSAMC21J16A_FLASH_LOCK_REGIONS,
                              ATSAMC21J16A_BUFFER_ADDR, ATSAMC21J16A_STACK_ADDR, ATSAMC21J16A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21J15A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21J15A_NAME, ATSAMC21J15A_FLASH_BASE, ATSAMC21J15A_FLASH_PAGES, ATSAMC21J15A_FLASH_PAGE_SIZE,
                              ATSAMC21J15A_FLASH_PLANES, ATSAMC21J15A_FLASH_LOCK_REGIONS,
                              ATSAMC21J15A_BUFFER_ADDR, ATSAMC21J15A_STACK_ADDR, ATSAMC21J15A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21G18A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21G18A_NAME, ATSAMC21G18A_FLASH_BASE, ATSAMC21G18A_FLASH_PAGES, ATSAMC21G18A_FLASH_PAGE_SIZE,
                              ATSAMC21G18A_FLASH_PLANES, ATSAMC21G18A_FLASH_LOCK_REGIONS,
                              ATSAMC21G18A_BUFFER_ADDR, ATSAMC21G18A_STACK_ADDR, ATSAMC21G18A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21G17A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21G17A_NAME, ATSAMC21G17A_FLASH_BASE, ATSAMC21G17A_FLASH_PAGES, ATSAMC21G17A_FLASH_PAGE_SIZE,
                              ATSAMC21G17A_FLASH_PLANES, ATSAMC21G17A_FLASH_LOCK_REGIONS,
                              ATSAMC21G17A_BUFFER_ADDR, ATSAMC21G17A_STACK_ADDR, ATSAMC21G17A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21G16A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21G16A_NAME, ATSAMC21G16A_FLASH_BASE, ATSAMC21G16A_FLASH_PAGES, ATSAMC21G16A_FLASH_PAGE_SIZE,
                              ATSAMC21G16A_FLASH_PLANES, ATSAMC21G16A_FLASH_LOCK_REGIONS,
                              ATSAMC21G16A_BUFFER_ADDR, ATSAMC21G16A_STACK_ADDR, ATSAMC21G16A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21G15A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21G15A_NAME, ATSAMC21G15A_FLASH_BASE, ATSAMC21G15A_FLASH_PAGES, ATSAMC21G15A_FLASH_PAGE_SIZE,
                              ATSAMC21G15A_FLASH_PLANES, ATSAMC21G15A_FLASH_LOCK_REGIONS,
                              ATSAMC21G15A_BUFFER_ADDR, ATSAMC21G15A_STACK_ADDR, ATSAMC21G15A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21E18A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21E18A_NAME, ATSAMC21E18A_FLASH_BASE, ATSAMC21E18A_FLASH_PAGES, ATSAMC21E18A_FLASH_PAGE_SIZE,
                              ATSAMC21E18A_FLASH_PLANES, ATSAMC21E18A_FLASH_LOCK_REGIONS,
                              ATSAMC21E18A_BUFFER_ADDR, ATSAMC21E18A_STACK_ADDR, ATSAMC21E18A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21E17A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21E17A_NAME, ATSAMC21E17A_FLASH_BASE, ATSAMC21E17A_FLASH_PAGES, ATSAMC21E17A_FLASH_PAGE_SIZE,
                              ATSAMC21E17A_FLASH_PLANES, ATSAMC21E17A_FLASH_LOCK_REGIONS,
                              ATSAMC21E17A_BUFFER_ADDR, ATSAMC21E17A_STACK_ADDR, ATSAMC21E17A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21E16A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21E16A_NAME, ATSAMC21E16A_FLASH_BASE, ATSAMC21E16A_FLASH_PAGES, ATSAMC21E16A_FLASH_PAGE_SIZE,
                              ATSAMC21E16A_FLASH_PLANES, ATSAMC21E16A_FLASH_LOCK_REGIONS,
                              ATSAMC21E16A_BUFFER_ADDR, ATSAMC21E16A_STACK_ADDR, ATSAMC21E16A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMC21E15A_CHIPID:
        flash = new NvmFlash( samba, ATSAMC21E15A_NAME, ATSAMC21E15A_FLASH_BASE, ATSAMC21E15A_FLASH_PAGES, ATSAMC21E15A_FLASH_PAGE_SIZE,
                              ATSAMC21E15A_FLASH_PLANES, ATSAMC21E15A_FLASH_LOCK_REGIONS,
                              ATSAMC21E15A_BUFFER_ADDR, ATSAMC21E15A_STACK_ADDR, ATSAMC21E15A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    //
    // SAMD11
    //
    case ATSAMD11D14AM_CHIPID:
        flash = new NvmFlash( samba, ATSAMD11D14AM_NAME, ATSAMD11D14AM_FLASH_BASE, ATSAMD11D14AM_FLASH_PAGES, ATSAMD11D14AM_FLASH_PAGE_SIZE,
                              ATSAMD11D14AM_FLASH_PLANES, ATSAMD11D14AM_FLASH_LOCK_REGIONS,
                              ATSAMD11D14AM_BUFFER_ADDR, ATSAMD11D14AM_STACK_ADDR, ATSAMD11D14AM_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD11D14AS_CHIPID:
        flash = new NvmFlash( samba, ATSAMD11D14AS_NAME, ATSAMD11D14AS_FLASH_BASE, ATSAMD11D14AS_FLASH_PAGES, ATSAMD11D14AS_FLASH_PAGE_SIZE,
                              ATSAMD11D14AS_FLASH_PLANES, ATSAMD11D14AS_FLASH_LOCK_REGIONS,
                              ATSAMD11D14AS_BUFFER_ADDR, ATSAMD11D14AS_STACK_ADDR, ATSAMD11D14AS_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    case ATSAMD11C14A_CHIPID:
        flash = new NvmFlash( samba, ATSAMD11C14A_NAME, ATSAMD11C14A_FLASH_BASE, ATSAMD11C14A_FLASH_PAGES, ATSAMD11C14A_FLASH_PAGE_SIZE,
                              ATSAMD11C14A_FLASH_PLANES, ATSAMD11C14A_FLASH_LOCK_REGIONS,
                              ATSAMD11C14A_BUFFER_ADDR, ATSAMD11C14A_STACK_ADDR, ATSAMD11C14A_NVMCTRL_BASE, /*canBrownout*/true ) ;
        break ;

    //
    // SAMDR1
    //
    case ATSAMR21E18A_CHIPID:
        flash = new NvmFlash( samba, ATSAMR21E18A_NAME, ATSAMR21E18A_FLASH_BASE, ATSAMR21E18A_FLASH_PAGES, ATSAMR21E18A_FLASH_PAGE_SIZE,
                              ATSAMR21E18A_FLASH_PLANES, ATSAMR21E18A_FLASH_LOCK_REGIONS,
                              ATSAMR21E18A_BUFFER_ADDR, ATSAMR21E18A_STACK_ADDR, ATSAMR21E18A_NVMCTRL_BASE, /*canBrownout*/true ) ;
	break ;

    //
    // SAM7SE
    //
    case 0x272a0a40:
        flash = new EfcFlash(samba, "AT91SAM7SE512", 0x100000, 2048, 256, 2, 32, 0x202000, 0x208000, true);
        break;
    case 0x272a0940:
        flash = new EfcFlash(samba, "AT91SAM7SE256", 0x100000, 1024, 256, 1, 16, 0x202000, 0x208000, true);
        break;
    case 0x272a0340:
        flash = new EfcFlash(samba, "AT91SAM7SE32", 0x100000, 256, 128, 1, 8, 0x201400, 0x201C00, true);
        break;
    //
    // SAM7S
    //
    case 0x270b0a40:
        flash = new EfcFlash(samba, "AT91SAM7S512", 0x100000, 2048, 256, 2, 32, 0x202000, 0x210000, false);
        break;
    case 0x270d0940: // A
    case 0x270b0940: // B/C
        flash = new EfcFlash(samba, "AT91SAM7S256", 0x100000, 1024, 256, 1, 16, 0x202000, 0x210000, false);
        break;
    case 0x270c0740: // A
    case 0x270a0740: // B/C
        flash = new EfcFlash(samba, "AT91SAM7S128", 0x100000, 512, 256, 1, 8, 0x202000, 0x208000, false);
        break;
    case 0x27090540:
        flash = new EfcFlash(samba, "AT91SAM7S64", 0x100000, 512, 128, 1, 16, 0x202000, 0x204000, false);
        break;
    case 0x27080340:
        flash = new EfcFlash(samba, "AT91SAM7S32", 0x100000, 256, 128, 1, 8, 0x201400, 0x202000, false);
        break;
    case 0x27050240:
        flash = new EfcFlash(samba, "AT91SAM7S16", 0x100000, 256, 64, 1, 8, 0x200000, 0x200e00, false);
        break;
    //
    // SAM7XC
    //
    case 0x271c0a40:
        flash = new EfcFlash(samba, "AT91SAMXC512", 0x100000, 2048, 256, 2, 32, 0x202000, 0x220000, true);
        break;
    case 0x271b0940:
        flash = new EfcFlash(samba, "AT91SAMXC256", 0x100000, 1024, 256, 1, 16, 0x202000, 0x210000, true);
        break;
    case 0x271a0740:
        flash = new EfcFlash(samba, "AT91SAMXC128", 0x100000, 512, 256, 1, 8, 0x202000, 0x208000, true);
        break;
    //
    // SAM7X
    //
    case 0x275c0a40:
        flash = new EfcFlash(samba, "AT91SAMX512", 0x100000, 2048, 256, 2, 32, 0x202000, 0x220000, true);
        break;
    case 0x275b0940:
        flash = new EfcFlash(samba, "AT91SAMX256", 0x100000, 1024, 256, 1, 16, 0x202000, 0x210000, true);
        break;
    case 0x275a0740:
        flash = new EfcFlash(samba, "AT91SAMX128", 0x100000, 512, 256, 1, 8, 0x202000, 0x208000, true);
        break;
    //
    // SAM4S
    //
    case 0x288c0ce0 : // A
    case 0x289c0ce0 : // B
    case 0x28ac0ce0 : // C
    case 0x288c0ce1 : // A
    case 0x289c0ce1 : // B
    case 0x28ac0ce1 : // C
        flash = new EefcFlash(samba, "ATSAM4S16", 0x400000, 2048, 512, 1, 128, 0x20001000, 0x20020000, 0x400e0a00, false);
        break;
    case 0x288c0ae0 : // A
    case 0x289c0ae0 : // B
    case 0x28ac0ae0 : // C
    case 0x288c0ae1 : // A
    case 0x289c0ae1 : // B
    case 0x28ac0ae1 : // C
        flash = new EefcFlash(samba, "ATSAM4S8", 0x400000, 1024, 512, 1, 64, 0x20001000, 0x20020000, 0x400e0a00, false);
        break;
    case 0x288b09e0 : // A
    case 0x288b09e1 : // A
    case 0x289b09e0 : // B
    case 0x289b09e1 : // B
    case 0x28ab09e0 : // C
    case 0x28ab09e1 : // C
        flash = new EefcFlash(samba, "ATSAM4S4", 0x400000, 512, 512, 1, 16, 0x20001000, 0x20010000, 0x400e0a00, false);
		break;
    case 0x288b07e0 : // A
    case 0x288b07e1 : // A
    case 0x289b07e0 : // B
    case 0x289b07e1 : // B
    case 0x28ab07e0 : // C
    case 0x28ab07e1 : // C
        flash = new EefcFlash(samba, "ATSAM4S2", 0x400000, 256, 512, 1, 16, 0x20001000, 0x20010000, 0x400e0a00, false);
		break;
	//
    // SAM3N
    //
    case 0x29340960 : // A
    case 0x29440960 : // B
    case 0x29540960 : // C
        flash = new EefcFlash(samba, "ATSAM3N4", 0x400000, 1024, 256, 1, 16, 0x20001000, 0x20006000, 0x400e0a00, false);
        break;
    case 0x29390760 : // A
    case 0x29490760 : // B
    case 0x29590760 : // C
        flash = new EefcFlash(samba, "ATSAM3N2", 0x400000, 512, 256, 1, 8, 0x20001000, 0x20004000, 0x400e0a00, false);
        break;
    case 0x29380560 : // A
    case 0x29480560 : // B
    case 0x29580560 : // C
        flash = new EefcFlash(samba, "ATSAM3N1", 0x400000, 256, 256, 1, 4, 0x20000800, 0x20002000, 0x400e0a00, false);
        break;
    //
    // SAM3S
    //
    case 0x28800960 : // A
    case 0x28900960 : // B
    case 0x28a00960 : // C
        flash = new EefcFlash(samba, "ATSAM3S4", 0x400000, 1024, 256, 1, 16, 0x20001000, 0x2000c000, 0x400e0a00, false);
        break;
    case 0x288a0760 : // A
    case 0x289a0760 : // B
    case 0x28aa0760 : // C
        flash = new EefcFlash(samba, "ATSAM3S2", 0x400000, 512, 256, 1, 8, 0x20000800, 0x20008000, 0x400e0a00, false);
        break;
    case 0x288a0560 : // A
    case 0x289a0560 : // B
    case 0x28aa0560 : // C
        flash = new EefcFlash(samba, "ATSAM3S1", 0x400000, 256, 256, 1, 4, 0x20000800, 0x20004000, 0x400e0a00, false);
        break;
    //
    // SAM3U
    //
    case 0x28000960 : // C
    case 0x28100960 : // E
        flash = new EefcFlash(samba, "ATSAM3U4", 0xE0000, 1024, 256, 2, 32, 0x20001000, 0x20008000, 0x400e0800, false);
        break;
    case 0x280a0760 : // C
    case 0x281a0760 : // E
        flash = new EefcFlash(samba, "ATSAM3U2", 0x80000, 512, 256, 1, 16, 0x20001000, 0x20004000, 0x400e0800, false);
        break;
    case 0x28090560 : // C
    case 0x28190560 : // E
        flash = new EefcFlash(samba, "ATSAM3U1", 0x80000, 256, 256, 1, 8, 0x20001000, 0x20002000, 0x400e0800, false);
        break;
    //
    // SAM3X
    //
    case 0x286e0a60 : // 8H
    case 0x285e0a60 : // 8E
    case 0x284e0a60 : // 8C
        flash = new EefcFlash(samba, "ATSAM3X8", 0x80000, 2048, 256, 2, 32, 0x20001000, 0x20010000, 0x400e0a00, false);
        break;
    case 0x285b0960 : // 4E
    case 0x284b0960 : // 4C
        flash = new EefcFlash(samba, "ATSAM3X4", 0x80000, 1024, 256, 2, 16, 0x20001000, 0x20008000, 0x400e0a00, false);
        break;
    //
    // SAM3A
    //
    case 0x283e0A60 : // 8C
        flash = new EefcFlash(samba, "ATSAM3A8", 0x80000, 2048, 256, 2, 32, 0x20001000, 0x20010000, 0x400e0a00, false);
        break;
    case 0x283b0960 : // 4C
        flash = new EefcFlash(samba, "ATSAM3A4", 0x80000, 1024, 256, 2, 16, 0x20001000, 0x20008000, 0x400e0a00, false);
        break;
    //
    // SAM7L
    //
    case 0x27330740 :
        flash = new EefcFlash(samba, "ATSAM7L128", 0x100000, 512, 256, 1, 16, 0x2ffb40, 0x300700, 0xffffff60, false);
        break;
    case 0x27330540 :
        flash = new EefcFlash(samba, "ATSAM7L64", 0x100000, 256, 256, 1, 8, 0x2ffb40, 0x300700, 0xffffff60, false);
        break;
    //
    // SAM9XE
    //
    case 0x329aa3a0 :
        flash = new EefcFlash(samba, "ATSAM9XE512", 0x200000, 1024, 512, 1, 32, 0x300000, 0x307000, 0xfffffa00, true);
        break;
    case 0x329a93a0 :
        flash = new EefcFlash(samba, "ATSAM9XE256", 0x200000, 512, 512, 1, 16, 0x300000, 0x307000, 0xfffffa00, true);
        break;
    case 0x329973a0 :
        flash = new EefcFlash(samba, "ATSAM9XE128", 0x200000, 256, 512, 1, 8, 0x300000, 0x303000, 0xfffffa00, true);
        break;

    default:
        flash = NULL;
        break;
    }

    return Flash::Ptr(flash);
}

