'''
    @sina Yademellat 
        target : subnet mask calculator
            input : /k
            output : A.B.C.D
                (ex) /8 : 255.0.0.0

'''

import tkinter as tk
from tkinter import *
from tkinter import messagebox

# / ////////////////////////////////////////////////////////////// << GUI >> //////////////////////////////////////////////////////////////


def make_new_root_for_label_k_is(ip_of_subnet:str) -> None:
   
    new_root = tk.Toplevel(window)

    new_root.title('SubNetMax')

    data_string = StringVar()
    data_string.set(ip_of_subnet)

    putPut_labla = tk.Entry( new_root , textvariable = data_string,justify='center' , fg= 'red'  , bd=0, font = ('Helvetica 20'),state="readonly")
    
    putPut_labla.pack()


def make_new_root_for_NETID(out_NETID:str) -> None:
     
    new_root = tk.Toplevel(window)

    new_root.title('out_NETID')

    data_string = StringVar()
    data_string.set(out_NETID)

    putPut_labla = tk.Entry( new_root , textvariable = data_string,justify='center' , fg= 'blue'  , bd=2, font = ('Helvetica 20'),state="readonly")
    
    putPut_labla.pack()


# / ////////////////////////////////////////////////////////////// << code >> //////////////////////////////////////////////////////////////


def run_it_label_k() -> None:

    # subnets for IPv4.
    dic_of_prefix_size={
                                    '1':'128.0.0.0'     ,'2':'192.0.0.0	'           ,'3':'224.0.0.0'        ,'4':'240.0.0.0',       '5':'248.0.0.0'     ,   '6':'252.0.0.0'         ,'7':'254.0.0.0',
                '8':'255.0.0.0'     ,'9':'255.128.0.0'      ,'10':'255.192.0.0'     ,'11':'255.224.0.0'     ,'12':'255.240.0.0',    '13':'255.248.0.0'      ,'14':'255.252.0.0'     ,'15':'255.254.0.0',
                '16':'255.255.0.0'  ,'17':'255.255.128.0'   ,'18':'255.255.192.0'   ,'19':'255.255.224.0'   ,'20':'255.255.255.240',   '21':'255.255.248.0'    ,'22':'255.255.252.0'   ,'23':'255.255.254.0',
                '24':'255.255.255.0'  ,'25':'255.255.255.128'   ,'26':'255.255.255.192'   ,'27':'255.255.255.224'   ,'28':'255.255.255.240',   '29':'255.255.255.248'    ,'30':'255.255.255.252'   ,'31':'255.255.255.254',
                
                '32':'255.255.255.255'
            } 
    input_text = entry_K.get()

   

    if(input_text in dic_of_prefix_size.keys()):
        entry_K.delete(0,2)
        make_new_root_for_label_k_is(dic_of_prefix_size[input_text])
    else:
        entry_K.delete(0,END)
        messagebox.showinfo('اشتب وارد کردی  ', '.حاجی چی زدی؟ باید بین 0 تا 255 باشه')

def  run_it_netID_time() ->None:

    # Netid = IP << and >> Subnetmax

    input_ip_ = entry_ip_.get().split('.')
    input_subnet = entry_subnet_.get().split('.')

    print('input_ip_: ',input_ip_)
    print('input_subnet: ',input_subnet)

    out_=""

    for ip_,sub_ in zip(input_ip_,input_subnet):
        for_out_int = int(ip_) & int(sub_)
        # print(for_out_int)
        out_+= (str(for_out_int) + '.')



    out_ = out_[:len(out_)-1] # for Del last char(.)
    print('out_: ',out_)

    # !GUI
    make_new_root_for_NETID(out_)


def delete_netId_part() -> None:

    entry_ip_.delete(0,END)
    entry_subnet_.delete(0,END)

# / ////////////////////////////////////////////////////////////// << __main__ >> //////////////////////////////////////////////////////////////


if __name__ =='__main__':
    
    window = tk.Tk()
    
    window.geometry('240x103')
    window.title("30Na") # Sian :)
    
    color_of_back_ground = "#2B3A55"
    color_for_Label_K = "#a0e8e6"


    window.configure(background= color_of_back_ground)


    label_K = tk.Label(bg= color_for_Label_K, text="/K",font=('Helvetica 13'))
    entry_K = tk.Entry(bd=2,justify='center',font=('Helvetica 13'))
    
    run_btn_for_lablel_k = tk.Button( window , bg=  color_for_Label_K ,text = 'Run', command = run_it_label_k )

    label_K.grid(row=0 ,column=0)
    entry_K.grid(row=0, column=1)
    
    run_btn_for_lablel_k.grid(row=0, column=2)

    #/ ////////////////////////////////////////////////////////////// << find NETOD >> //////////////////////////////////////////////////////////////
        #! NETID  = IP (AND) SUBNETMAK
    
    lable_MAKE_net_id = tk.Label( bg =color_of_back_ground,text="")
    lable_MAKE_net_id.grid(row=3,column=1)

    
    lable_ip_ = tk.Label(bg= color_for_Label_K, text="IP",font=('Helvetica 13'))
    entry_ip_ =  tk.Entry(bd=2,justify='center',font=('Helvetica 13'))

    label_subnet_ = tk.Label(bg= color_for_Label_K, text="sb",font=('Helvetica 13'))
    entry_subnet_ =  tk.Entry(bd=2,justify='center',font=('Helvetica 13'))

    lable_ip_.grid(row=4 ,column=0)
    entry_ip_.grid(row=4,column= 1)

    label_subnet_.grid(row=5,column=0)
    entry_subnet_.grid(row=5,column=1)

        #! button
    run_btn_manke_NetID  = tk.Button( window , bg=color_for_Label_K ,text = 'Run', command = run_it_netID_time )
    run_btn_manke_NetID.grid(row=4,column=2)

    run_btn_del_NetID_part  = tk.Button( window , bg=color_for_Label_K ,text = 'del', command = delete_netId_part )
    run_btn_del_NetID_part.grid(row=5,column=2)


    window.mainloop()

