module lfsr(
    input  logic       clk, 
    input  logic       rst, 
    input  logic       en, 
    output  logic [6:0] data_out
); 

logic [7:1]    sreg; 
logic          data_in; 
assign data_in = (sreg[3] & sreg[7]) | (sreg[3]==1'b0 & sreg[7]==1'b0); 

always_ff @(posedge clk, posedge rst) begin
    if (rst)
        sreg <= 4'b0; 
    else if(en) begin
        sreg[7] <= sreg[6]; 
        sreg[6] <= sreg[5]; 
        sreg[5] <= sreg[4]; 
        sreg[4] <= sreg[3]; 
        sreg[3] <= sreg[2]; 
        sreg[2] <= sreg[1]; 
        sreg[1] <= data_in; 
    end    
end

assign  data_out = sreg;     
endmodule
