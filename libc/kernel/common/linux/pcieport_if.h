/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef _PCIEPORT_IF_H_
#define _PCIEPORT_IF_H_
#define PCIE_ANY_PORT (~0)
#define PCIE_PORT_SERVICE_PME_SHIFT 0
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCIE_PORT_SERVICE_PME (1 << PCIE_PORT_SERVICE_PME_SHIFT)
#define PCIE_PORT_SERVICE_AER_SHIFT 1
#define PCIE_PORT_SERVICE_AER (1 << PCIE_PORT_SERVICE_AER_SHIFT)
#define PCIE_PORT_SERVICE_HP_SHIFT 2
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define PCIE_PORT_SERVICE_HP (1 << PCIE_PORT_SERVICE_HP_SHIFT)
#define PCIE_PORT_SERVICE_VC_SHIFT 3
#define PCIE_PORT_SERVICE_VC (1 << PCIE_PORT_SERVICE_VC_SHIFT)
struct pcie_device {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int irq;
 struct pci_dev *port;
 u32 service;
 void *priv_data;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 struct device device;
};
#define to_pcie_device(d) container_of(d, struct pcie_device, device)
struct pcie_port_service_driver {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 const char *name;
 int (*probe) (struct pcie_device *dev);
 void (*remove) (struct pcie_device *dev);
 int (*suspend) (struct pcie_device *dev);
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 int (*resume) (struct pcie_device *dev);
 const struct pci_error_handlers *err_handler;
 pci_ers_result_t (*reset_link) (struct pci_dev *dev);
 int port_type;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 u32 service;
 struct device_driver driver;
};
#define to_service_driver(d)   container_of(d, struct pcie_port_service_driver, driver)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
