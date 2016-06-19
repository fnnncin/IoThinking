class AddUserToAmbiente < ActiveRecord::Migration
  def change
    add_column :ambientes, :user_id, :integer
    add_index  :ambientes, :user_id
  end
end
