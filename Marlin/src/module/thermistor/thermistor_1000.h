/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// Table for potentiometer values between 0-100
constexpr temp_entry_t temptable_1000[] PROGMEM = {
{ OV(	0.0	),	0	},
{ OV(	98.5	),	5	},
{ OV(	179.6	),	10	},
{ OV(	247.7	),	15	},
{ OV(	305.7	),	20	},
{ OV(	355.6	),	25	},
{ OV(	399.0	),	30	},
{ OV(	437.1	),	35	},
{ OV(	470.8	),	40	},
{ OV(	500.9	),	45	},
{ OV(	527.8	),	50	},
{ OV(	552.2	),	55	},
{ OV(	574.2	),	60	},
{ OV(	594.3	),	65	},
{ OV(	612.6	),	70	},
{ OV(	629.5	),	75	},
{ OV(	645.0	),	80	},
{ OV(	659.4	),	85	},
{ OV(	672.7	),	90	},
{ OV(	685.1	),	95	},
{ OV(	696.6	),	100	},

};