class AddUserIdToAmbientes < ActiveRecord::Migration
  def change
    add_column :ambientes, :user_id, :integer
  end
end
