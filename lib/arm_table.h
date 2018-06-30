/* arm_table.h --
 * Copyright 2009-10,2013-18 Red Hat Inc., Durham, North Carolina.
 * All Rights Reserved.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * Authors:
 *      Steve Grubb <sgrubb@redhat.com>
 */
_S(0, "restart_syscall")
_S(1, "exit")
_S(2, "fork")
_S(3, "read")
_S(4, "write")
_S(5, "open")
_S(6, "close")
_S(8, "creat")
_S(9, "link")
_S(10, "unlink")
_S(11, "execve")
_S(12, "chdir")
_S(13, "time")
_S(14, "mknod")
_S(15, "chmod")
_S(16, "lchown")
_S(19, "lseek")
_S(20, "getpid")
_S(21, "mount")
_S(22, "umount")
_S(23, "setuid")
_S(24, "getuid")
_S(25, "stime")
_S(26, "ptrace")
_S(27, "alarm")
_S(29, "pause")
_S(30, "utime")
_S(33, "access")
_S(34, "nice")
_S(36, "sync")
_S(37, "kill")
_S(38, "rename")
_S(39, "mkdir")
_S(40, "rmdir")
_S(41, "dup")
_S(42, "pipe")
_S(43, "times")
_S(45, "brk")
_S(46, "setgid")
_S(47, "getgid")
_S(49, "geteuid")
_S(50, "getegid")
_S(51, "acct")
_S(52, "umount2")
_S(54, "ioctl")
_S(55, "fcntl")
_S(57, "setpgid")
_S(60, "umask")
_S(61, "chroot")
_S(62, "ustat")
_S(63, "dup2")
_S(64, "getppid")
_S(65, "getpgrp")
_S(66, "setsid")
_S(67, "sigaction")
_S(70, "setreuid")
_S(71, "setregid")
_S(72, "sigsuspend")
_S(73, "sigpending")
_S(74, "sethostname")
_S(75, "setrlimit")
_S(76, "getrlimit")
_S(77, "getrusage")
_S(78, "gettimeofday")
_S(79, "settimeofday")
_S(80, "getgroups")
_S(81, "setgroups")
_S(82, "select")
_S(83, "symlink")
_S(85, "readlink")
_S(86, "uselib")
_S(87, "swapon")
_S(88, "reboot")
_S(89, "readdir")
_S(90, "mmap")
_S(91, "munmap")
_S(92, "truncate")
_S(93, "ftruncate")
_S(94, "fchmod")
_S(95, "fchown")
_S(96, "getpriority")
_S(97, "setpriority")
_S(99, "statfs")
_S(100, "fstatfs")
_S(102, "socketcall")
_S(103, "syslog")
_S(104, "setitimer")
_S(105, "getitimer")
_S(106, "stat")
_S(107, "lstat")
_S(108, "fstat")
_S(111, "vhangup")
_S(113, "syscall")
_S(114, "wait4")
_S(115, "swapoff")
_S(116, "sysinfo")
_S(117, "ipc")
_S(118, "fsync")
_S(119, "sigreturn")
_S(120, "clone")
_S(121, "setdomainname")
_S(122, "uname")
_S(124, "adjtimex")
_S(125, "mprotect")
_S(126, "sigprocmask")
_S(128, "init_module")
_S(129, "delete_module")
_S(131, "quotactl")
_S(132, "getpgid")
_S(133, "fchdir")
_S(134, "bdflush")
_S(135, "sysfs")
_S(136, "personality")
_S(138, "setfsuid")
_S(139, "setfsgid")
_S(140, "llseek")
_S(141, "getdents")
_S(142, "newselect")
_S(143, "flock")
_S(144, "msync")
_S(145, "readv")
_S(146, "writev")
_S(147, "getsid")
_S(148, "fdatasync")
_S(149, "sysctl")
_S(150, "mlock")
_S(151, "munlock")
_S(152, "mlockall")
_S(153, "munlockall")
_S(154, "sched_setparam")
_S(155, "sched_getparam")
_S(156, "sched_setscheduler")
_S(157, "sched_getscheduler")
_S(158, "sched_yield")
_S(159, "sched_get_priority_max")
_S(160, "sched_get_priority_min")
_S(161, "sched_rr_get_interval")
_S(162, "nanosleep")
_S(163, "mremap")
_S(164, "setresuid")
_S(165, "getresuid")
_S(168, "poll")
_S(169, "nfsservctl")
_S(170, "setresgid")
_S(171, "getresgid")
_S(172, "prctl")
_S(173, "rt_sigreturn")
_S(174, "rt_sigaction")
_S(175, "rt_sigprocmask")
_S(176, "rt_sigpending")
_S(177, "rt_sigtimedwait")
_S(178, "rt_sigqueueinfo")
_S(179, "rt_sigsuspend")
_S(180, "pread64")
_S(181, "pwrite64")
_S(182, "chown")
_S(183, "getcwd")
_S(184, "capget")
_S(185, "capset")
_S(186, "sigaltstack")
_S(187, "sendfile")
_S(190, "vfork")
_S(191, "ugetrlimit")
_S(192, "mmap2")
_S(193, "truncate64")
_S(194, "ftruncate64")
_S(195, "stat64")
_S(196, "lstat64")
_S(197, "fstat64")
_S(198, "lchown32")
_S(199, "getuid32")
_S(200, "getgid32")
_S(201, "geteuid32")
_S(202, "getegid32")
_S(203, "setreuid32")
_S(204, "setregid32")
_S(205, "getgroups32")
_S(206, "setgroups32")
_S(207, "fchown32")
_S(208, "setresuid32")
_S(209, "getresuid32")
_S(210, "setresgid32")
_S(211, "getresgid32")
_S(212, "chown32")
_S(213, "setuid32")
_S(214, "setgid32")
_S(215, "setfsuid32")
_S(216, "setfsgid32")
_S(217, "getdents64")
_S(218, "pivot_root")
_S(219, "mincore")
_S(220, "madvise")
_S(221, "fcntl64")
_S(224, "gettid")
_S(225, "readahead")
_S(226, "setxattr")
_S(227, "lsetxattr")
_S(228, "fsetxattr")
_S(229, "getxattr")
_S(230, "lgetxattr")
_S(231, "fgetxattr")
_S(232, "listxattr")
_S(233, "llistxattr")
_S(234, "flistxattr")
_S(235, "removexattr")
_S(236, "lremovexattr")
_S(237, "fremovexattr")
_S(238, "tkill")
_S(239, "sendfile64")
_S(240, "futex")
_S(241, "sched_setaffinity")
_S(242, "sched_getaffinity")
_S(243, "io_setup")
_S(244, "io_destroy")
_S(245, "io_getevents")
_S(246, "io_submit")
_S(247, "io_cancel")
_S(248, "exit_group")
_S(249, "lookup_dcookie")
_S(250, "epoll_create")
_S(251, "epoll_ctl")
_S(252, "epoll_wait")
_S(253, "remap_file_pages")
_S(256, "set_tid_address")
_S(257, "timer_create")
_S(258, "timer_settime")
_S(259, "timer_gettime")
_S(260, "timer_getoverrun")
_S(261, "timer_delete")
_S(262, "clock_settime")
_S(263, "clock_gettime")
_S(264, "clock_getres")
_S(265, "clock_nanosleep")
_S(266, "statfs64")
_S(267, "fstatfs64")
_S(268, "tgkill")
_S(269, "utimes")
_S(270, "fadvise64_64")
_S(271, "pciconfig_iobase")
_S(272, "pciconfig_read")
_S(273, "pciconfig_write")
_S(274, "mq_open")
_S(275, "mq_unlink")
_S(276, "mq_timedsend")
_S(277, "mq_timedreceive")
_S(278, "mq_notify")
_S(279, "mq_getsetattr")
_S(280, "waitid")
_S(281, "socket")
_S(282, "bind")
_S(283, "connect")
_S(284, "listen")
_S(285, "accept")
_S(286, "getsockname")
_S(287, "getpeername")
_S(288, "socketpair")
_S(289, "send")
_S(290, "sendto")
_S(291, "recv")
_S(292, "recvfrom")
_S(293, "shutdown")
_S(294, "setsockopt")
_S(295, "getsockopt")
_S(296, "sendmsg")
_S(297, "recvmsg")
_S(298, "semop")
_S(299, "semget")
_S(300, "semctl")
_S(301, "msgsnd")
_S(302, "msgrcv")
_S(303, "msgget")
_S(304, "msgctl")
_S(305, "shmat")
_S(306, "shmdt")
_S(307, "shmget")
_S(308, "shmctl")
_S(309, "add_key")
_S(310, "request_key")
_S(311, "keyctl")
_S(312, "semtimedop")
_S(313, "vserver")
_S(314, "ioprio_set")
_S(315, "ioprio_get")
_S(316, "inotify_init")
_S(317, "inotify_add_watch")
_S(318, "inotify_rm_watch")
_S(319, "mbind")
_S(320, "get_mempolicy")
_S(321, "set_mempolicy")
_S(322, "openat")
_S(323, "mkdirat")
_S(324, "mknodat")
_S(325, "fchownat")
_S(326, "futimesat")
_S(327, "fstatat64")
_S(328, "unlinkat")
_S(329, "renameat")
_S(330, "linkat")
_S(331, "symlinkat")
_S(332, "readlinkat")
_S(333, "fchmodat")
_S(334, "faccessat")
_S(337, "unshare")
_S(338, "set_robust_list")
_S(339, "get_robust_list")
_S(340, "splice")
_S(341, "sync_file_range")
_S(342, "tee")
_S(343, "vmsplice")
_S(344, "move_pages")
_S(345, "getcpu")
_S(347, "kexec_load")
_S(348, "utimensat")
_S(349, "signalfd")
_S(350, "timerfd_create")
_S(351, "eventfd")
_S(352, "fallocate")
_S(353, "timerfd_settime")
_S(354, "timerfd_gettime")
_S(355, "signalfd4")
_S(356, "eventfd2")
_S(357, "epoll_create1")
_S(358, "dup3")
_S(359, "pipe2")
_S(360, "inotify_init1")
_S(361, "preadv")
_S(362, "pwritev")
_S(363, "rt_tgsigqueueinfo")
_S(364, "perf_event_open")
_S(365, "recvmmsg")
_S(366, "accept4")
_S(367, "fanotify_init")
_S(368, "fanotify_mark")
_S(369, "prlimit64")
_S(370, "name_to_handle_at")
_S(371, "open_by_handle_at")
_S(372, "clock_adjtime")
_S(373, "syncfs")
_S(374, "sendmmsg")
_S(375, "setns")
_S(376, "process_vm_readv")
_S(377, "process_vm_writev")
_S(378, "kcmp")
_S(379, "finit_module")
_S(380, "sched_setattr")
_S(381, "sched_getattr")
_S(382, "renameat2")
_S(383, "seccomp")
_S(384, "getrandom")
_S(385, "memfd_create")
_S(386, "bpf")
_S(387, "execveat")
_S(388, "userfaultfd")
_S(389, "membarrier")
_S(390, "mlock2")
_S(391, "copy_file_range")
_S(392, "preadv2")
_S(393, "pwritev2")
_S(394, "pkey_mprotect")
_S(395, "pkey_alloc")
_S(396, "pkey_free")
_S(397, "statx")
_S(398, "rseq")
